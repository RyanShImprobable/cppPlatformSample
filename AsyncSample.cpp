#include <grpcpp/grpcpp.h>
#include "improbable/spatialos/deployment/v1alpha1/deployment.pb.h"
#include "improbable/spatialos/deployment/v1alpha1/deployment.grpc.pb.h"
#include <grpcpp/impl/codegen/async_unary_call_impl.h>

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <future>

class CreateDeploymentClient {
    public:
      explicit CreateDeploymentClient(std::shared_ptr<grpc::Channel> channel)
            : stub_(improbable::spatialos::deployment::v1alpha1::DeploymentService::NewStub(channel)) {}

      std::string readFileToString(const std::string filePath)
      {
          std::ifstream ifs(filePath);
          std::string content((std::istreambuf_iterator<char>(ifs)),
              (std::istreambuf_iterator<char>()));
          return content;
      }

      // Assembles the client's payload and sends it to the server.
      void CreateDeployment(const std::string& project_name, const std::string& launch_config_path) {
          // 准备请求参数
          auto cd_req = improbable::spatialos::deployment::v1alpha1::CreateDeploymentRequest();
          std::string content = readFileToString(launch_config_path);
          auto* dlp = new improbable::spatialos::deployment::v1alpha1::Deployment();
          auto* launch_config = new improbable::spatialos::deployment::v1alpha1::LaunchConfig();
          launch_config->set_config_json(content);
          dlp->set_project_name(project_name);
          // put ip in the name
          dlp->set_name("test_local_deployment");
          dlp->set_allocated_launch_config(launch_config);
          dlp->set_runtime_version("0.4.3");
          cd_req.set_allocated_deployment(dlp);

          // Call object to store rpc data
          AsyncClientCall* call = new AsyncClientCall;
          // stub_->AsyncSayHello() performs the RPC call, returning an instance to
          // store in "call". Because we are using the asynchronous API, we need to
          // hold on to the "call" instance in order to get updates on the ongoing RPC.
          call->response_reader = stub_->AsyncCreateDeployment(&call->context, cd_req, &cq_);
          // Request that, upon completion of the RPC, "reply" be updated with the
          // server's response; "status" with the indication of whether the operation
          // was successful. Tag the request with the memory address of the call object.
          call->response_reader->Finish(&call->reply, &call->status, (void*)call);
      }

      struct AsyncResult {
          std::string Message;
      };
    // Loop while listening for completed responses.
    // Prints out the response from the server.
     AsyncResult AsyncCompleteRpc() {
        void* got_tag;
        bool ok = false;
        AsyncResult result;
        // Block until the next result is available in the completion queue "cq".
        while (cq_.Next(&got_tag, &ok)) {
            // The tag in this example is the memory location of the call object
            AsyncClientCall* call = static_cast<AsyncClientCall*>(got_tag);
            // Verify that the request was completed successfully. Note that "ok"
            // corresponds solely to the request for updates introduced by Finish().
            GPR_ASSERT(ok);
           
            if (call->status.ok()) {
                result.Message = call->reply.name();
                std::cout << "Deployment received: " << call->reply.name() << std::endl;
            }
            else {
                result.Message = call->status.error_message();
                std::cout << "RPC failed" << std::endl;
            }                         
            // Once we're complete, deallocate the call object.
            delete call;
            return result;
            
        }

        return result;
    }


  
    // struct for keeping state and data information
    struct AsyncClientCall {
        // Container for the data we expect from the server.
        google::longrunning::Operation reply;
        // Context for the client. It could be used to convey extra information to
        // the server and/or tweak certain RPC behaviors.
        grpc::ClientContext context;
        // Storage for the status of the RPC upon completion.
        grpc::Status status;
        std::unique_ptr<grpc::ClientAsyncResponseReader<google::longrunning::Operation>> response_reader;
    };

    // Out of the passed in Channel comes the stub, stored here, our view of the
    // server's exposed services.
    std::unique_ptr<improbable::spatialos::deployment::v1alpha1::DeploymentService::Stub> stub_;

    // The producer-consumer queue we use to communicate asynchronously with the
    // gRPC runtime.
    grpc::CompletionQueue cq_;
};

int main(int argc, char** argv) {
    // Instantiate the client. It requires a channel, out of which the actual RPCs
    // are created. This channel models a connection to an endpoint (in this case,
    // localhost at port 50051). We indicate that the channel isn't authenticated
    // (use of InsecureChannelCredentials()).
    CreateDeploymentClient greeter(grpc::CreateChannel(
        "localhost:9876", grpc::InsecureChannelCredentials()));

    std::string launch_path = "C:\\UE\\423UEGDK010\\UnrealEngine\\Samples\\ClientTravelProject\\spatial\\default_launch.json";
    const std::string project_name = "your_project_name_here";
    greeter.CreateDeployment(project_name, launch_path);
    std::cout << "Press control-c to quit" << std::endl << std::endl;
    
    auto future = std::async(&CreateDeploymentClient::AsyncCompleteRpc, &greeter);
    CreateDeploymentClient::AsyncResult simple = future.get();
    std::cout << "Return value is " << simple.Message << std::endl;
    return 0;
}

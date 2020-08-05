// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: improbable/spatialos/serviceaccount/v1alpha1/serviceaccount.proto

#include "improbable/spatialos/serviceaccount/v1alpha1/serviceaccount.pb.h"
#include "improbable/spatialos/serviceaccount/v1alpha1/serviceaccount.grpc.pb.h"

#include <functional>
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
namespace improbable {
namespace spatialos {
namespace serviceaccount {
namespace v1alpha1 {

static const char* ServiceAccountService_method_names[] = {
  "/improbable.spatialos.serviceaccount.v1alpha1.ServiceAccountService/CreateServiceAccount",
  "/improbable.spatialos.serviceaccount.v1alpha1.ServiceAccountService/ListServiceAccounts",
  "/improbable.spatialos.serviceaccount.v1alpha1.ServiceAccountService/UpdateServiceAccount",
  "/improbable.spatialos.serviceaccount.v1alpha1.ServiceAccountService/DeleteServiceAccount",
};

std::unique_ptr< ServiceAccountService::Stub> ServiceAccountService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ServiceAccountService::Stub> stub(new ServiceAccountService::Stub(channel));
  return stub;
}

ServiceAccountService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateServiceAccount_(ServiceAccountService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListServiceAccounts_(ServiceAccountService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateServiceAccount_(ServiceAccountService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteServiceAccount_(ServiceAccountService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ServiceAccountService::Stub::CreateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest& request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateServiceAccount_, context, request, response);
}

void ServiceAccountService::Stub::experimental_async::CreateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::CreateServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::CreateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateServiceAccount_, context, request, response, reactor);
}

void ServiceAccountService::Stub::experimental_async::CreateServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateServiceAccount_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>* ServiceAccountService::Stub::AsyncCreateServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_CreateServiceAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>* ServiceAccountService::Stub::PrepareAsyncCreateServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_CreateServiceAccount_, context, request, false);
}

::grpc::Status ServiceAccountService::Stub::ListServiceAccounts(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest& request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListServiceAccounts_, context, request, response);
}

void ServiceAccountService::Stub::experimental_async::ListServiceAccounts(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListServiceAccounts_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::ListServiceAccounts(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListServiceAccounts_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::ListServiceAccounts(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ListServiceAccounts_, context, request, response, reactor);
}

void ServiceAccountService::Stub::experimental_async::ListServiceAccounts(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ListServiceAccounts_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse>* ServiceAccountService::Stub::AsyncListServiceAccountsRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceAccounts_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse>* ServiceAccountService::Stub::PrepareAsyncListServiceAccountsRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse>::Create(channel_.get(), cq, rpcmethod_ListServiceAccounts_, context, request, false);
}

::grpc::Status ServiceAccountService::Stub::UpdateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest& request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateServiceAccount_, context, request, response);
}

void ServiceAccountService::Stub::experimental_async::UpdateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::UpdateServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::UpdateServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateServiceAccount_, context, request, response, reactor);
}

void ServiceAccountService::Stub::experimental_async::UpdateServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateServiceAccount_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>* ServiceAccountService::Stub::AsyncUpdateServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_UpdateServiceAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>* ServiceAccountService::Stub::PrepareAsyncUpdateServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>::Create(channel_.get(), cq, rpcmethod_UpdateServiceAccount_, context, request, false);
}

::grpc::Status ServiceAccountService::Stub::DeleteServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteServiceAccount_, context, request, response);
}

void ServiceAccountService::Stub::experimental_async::DeleteServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::DeleteServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteServiceAccount_, context, request, response, std::move(f));
}

void ServiceAccountService::Stub::experimental_async::DeleteServiceAccount(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteServiceAccount_, context, request, response, reactor);
}

void ServiceAccountService::Stub::experimental_async::DeleteServiceAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteServiceAccount_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* ServiceAccountService::Stub::AsyncDeleteServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteServiceAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* ServiceAccountService::Stub::PrepareAsyncDeleteServiceAccountRaw(::grpc::ClientContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteServiceAccount_, context, request, false);
}

ServiceAccountService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServiceAccountService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServiceAccountService::Service, ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>(
          std::mem_fn(&ServiceAccountService::Service::CreateServiceAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServiceAccountService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServiceAccountService::Service, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse>(
          std::mem_fn(&ServiceAccountService::Service::ListServiceAccounts), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServiceAccountService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServiceAccountService::Service, ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount>(
          std::mem_fn(&ServiceAccountService::Service::UpdateServiceAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServiceAccountService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServiceAccountService::Service, ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest, ::google::protobuf::Empty>(
          std::mem_fn(&ServiceAccountService::Service::DeleteServiceAccount), this)));
}

ServiceAccountService::Service::~Service() {
}

::grpc::Status ServiceAccountService::Service::CreateServiceAccount(::grpc::ServerContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::CreateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceAccountService::Service::ListServiceAccounts(::grpc::ServerContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ListServiceAccountsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceAccountService::Service::UpdateServiceAccount(::grpc::ServerContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::UpdateServiceAccountRequest* request, ::improbable::spatialos::serviceaccount::v1alpha1::ServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServiceAccountService::Service::DeleteServiceAccount(::grpc::ServerContext* context, const ::improbable::spatialos::serviceaccount::v1alpha1::DeleteServiceAccountRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace improbable
}  // namespace spatialos
}  // namespace serviceaccount
}  // namespace v1alpha1

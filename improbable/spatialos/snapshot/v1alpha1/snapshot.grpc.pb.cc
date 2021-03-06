// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: improbable/spatialos/snapshot/v1alpha1/snapshot.proto

#include "improbable/spatialos/snapshot/v1alpha1/snapshot.pb.h"
#include "improbable/spatialos/snapshot/v1alpha1/snapshot.grpc.pb.h"

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
namespace snapshot {
namespace v1alpha1 {

static const char* SnapshotService_method_names[] = {
  "/improbable.spatialos.snapshot.v1alpha1.SnapshotService/ListSnapshots",
  "/improbable.spatialos.snapshot.v1alpha1.SnapshotService/GetSnapshot",
  "/improbable.spatialos.snapshot.v1alpha1.SnapshotService/TakeSnapshot",
  "/improbable.spatialos.snapshot.v1alpha1.SnapshotService/UploadSnapshot",
  "/improbable.spatialos.snapshot.v1alpha1.SnapshotService/ConfirmUpload",
};

std::unique_ptr< SnapshotService::Stub> SnapshotService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SnapshotService::Stub> stub(new SnapshotService::Stub(channel));
  return stub;
}

SnapshotService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListSnapshots_(SnapshotService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSnapshot_(SnapshotService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TakeSnapshot_(SnapshotService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UploadSnapshot_(SnapshotService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ConfirmUpload_(SnapshotService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SnapshotService::Stub::ListSnapshots(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest& request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListSnapshots_, context, request, response);
}

void SnapshotService::Stub::experimental_async::ListSnapshots(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListSnapshots_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::ListSnapshots(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListSnapshots_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::ListSnapshots(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ListSnapshots_, context, request, response, reactor);
}

void SnapshotService::Stub::experimental_async::ListSnapshots(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ListSnapshots_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse>* SnapshotService::Stub::AsyncListSnapshotsRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse>::Create(channel_.get(), cq, rpcmethod_ListSnapshots_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse>* SnapshotService::Stub::PrepareAsyncListSnapshotsRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse>::Create(channel_.get(), cq, rpcmethod_ListSnapshots_, context, request, false);
}

::grpc::Status SnapshotService::Stub::GetSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest& request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSnapshot_, context, request, response);
}

void SnapshotService::Stub::experimental_async::GetSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::GetSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::GetSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSnapshot_, context, request, response, reactor);
}

void SnapshotService::Stub::experimental_async::GetSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSnapshot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse>* SnapshotService::Stub::AsyncGetSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse>::Create(channel_.get(), cq, rpcmethod_GetSnapshot_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse>* SnapshotService::Stub::PrepareAsyncGetSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse>::Create(channel_.get(), cq, rpcmethod_GetSnapshot_, context, request, false);
}

::grpc::Status SnapshotService::Stub::TakeSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_TakeSnapshot_, context, request, response);
}

void SnapshotService::Stub::experimental_async::TakeSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest* request, ::google::longrunning::Operation* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TakeSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::TakeSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::longrunning::Operation* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TakeSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::TakeSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest* request, ::google::longrunning::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TakeSnapshot_, context, request, response, reactor);
}

void SnapshotService::Stub::experimental_async::TakeSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::longrunning::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TakeSnapshot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* SnapshotService::Stub::AsyncTakeSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_TakeSnapshot_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* SnapshotService::Stub::PrepareAsyncTakeSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_TakeSnapshot_, context, request, false);
}

::grpc::Status SnapshotService::Stub::UploadSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest& request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UploadSnapshot_, context, request, response);
}

void SnapshotService::Stub::experimental_async::UploadSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UploadSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::UploadSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UploadSnapshot_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::UploadSnapshot(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UploadSnapshot_, context, request, response, reactor);
}

void SnapshotService::Stub::experimental_async::UploadSnapshot(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UploadSnapshot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse>* SnapshotService::Stub::AsyncUploadSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse>::Create(channel_.get(), cq, rpcmethod_UploadSnapshot_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse>* SnapshotService::Stub::PrepareAsyncUploadSnapshotRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse>::Create(channel_.get(), cq, rpcmethod_UploadSnapshot_, context, request, false);
}

::grpc::Status SnapshotService::Stub::ConfirmUpload(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest& request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ConfirmUpload_, context, request, response);
}

void SnapshotService::Stub::experimental_async::ConfirmUpload(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ConfirmUpload_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::ConfirmUpload(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ConfirmUpload_, context, request, response, std::move(f));
}

void SnapshotService::Stub::experimental_async::ConfirmUpload(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ConfirmUpload_, context, request, response, reactor);
}

void SnapshotService::Stub::experimental_async::ConfirmUpload(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ConfirmUpload_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse>* SnapshotService::Stub::AsyncConfirmUploadRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse>::Create(channel_.get(), cq, rpcmethod_ConfirmUpload_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse>* SnapshotService::Stub::PrepareAsyncConfirmUploadRaw(::grpc::ClientContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse>::Create(channel_.get(), cq, rpcmethod_ConfirmUpload_, context, request, false);
}

SnapshotService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SnapshotService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SnapshotService::Service, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse>(
          std::mem_fn(&SnapshotService::Service::ListSnapshots), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SnapshotService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SnapshotService::Service, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse>(
          std::mem_fn(&SnapshotService::Service::GetSnapshot), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SnapshotService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SnapshotService::Service, ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest, ::google::longrunning::Operation>(
          std::mem_fn(&SnapshotService::Service::TakeSnapshot), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SnapshotService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SnapshotService::Service, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse>(
          std::mem_fn(&SnapshotService::Service::UploadSnapshot), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SnapshotService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SnapshotService::Service, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse>(
          std::mem_fn(&SnapshotService::Service::ConfirmUpload), this)));
}

SnapshotService::Service::~Service() {
}

::grpc::Status SnapshotService::Service::ListSnapshots(::grpc::ServerContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ListSnapshotsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SnapshotService::Service::GetSnapshot(::grpc::ServerContext* context, const ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::GetSnapshotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SnapshotService::Service::TakeSnapshot(::grpc::ServerContext* context, const ::improbable::spatialos::snapshot::v1alpha1::TakeSnapshotRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SnapshotService::Service::UploadSnapshot(::grpc::ServerContext* context, const ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotRequest* request, ::improbable::spatialos::snapshot::v1alpha1::UploadSnapshotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SnapshotService::Service::ConfirmUpload(::grpc::ServerContext* context, const ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadRequest* request, ::improbable::spatialos::snapshot::v1alpha1::ConfirmUploadResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace improbable
}  // namespace spatialos
}  // namespace snapshot
}  // namespace v1alpha1


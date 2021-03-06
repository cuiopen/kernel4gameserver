// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtocolID.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtocolID.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::EnumDescriptor* ClientMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ServerMsgID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProtocolID_2eproto() {
  protobuf_AddDesc_ProtocolID_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProtocolID.proto");
  GOOGLE_CHECK(file != NULL);
  ClientMsgID_descriptor_ = file->enum_type(0);
  ServerMsgID_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProtocolID_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_ProtocolID_2eproto() {
}

void protobuf_AddDesc_ProtocolID_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020ProtocolID.proto*\237\001\n\013ClientMsgID\022!\n\034CL"
    "IENT_MSG_CHOOSE_SERVER_REQ\020\220N\022\031\n\024CLIENT_"
    "MSG_LOGIN_REQ\020\221N\022\031\n\024CLIENT_MSG_HEARTBEAT"
    "\020\222N\022\025\n\020CLIENT_MSG_MOVEO\020\364N\022 \n\033CLIENT_MSG"
    "_CAST_ABILITY_REQ\020\330O*Q\n\013ServerMsgID\022\"\n\034S"
    "ERVER_MSG_CHOOSE_SERVER_ASK\020\320\206\003\022\036\n\030SERVE"
    "R_MSG_LOGIN_RES_ASK\020\321\206\003", 263);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProtocolID.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtocolID_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtocolID_2eproto {
  StaticDescriptorInitializer_ProtocolID_2eproto() {
    protobuf_AddDesc_ProtocolID_2eproto();
  }
} static_descriptor_initializer_ProtocolID_2eproto_;
const ::google::protobuf::EnumDescriptor* ClientMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientMsgID_descriptor_;
}
bool ClientMsgID_IsValid(int value) {
  switch(value) {
    case 10000:
    case 10001:
    case 10002:
    case 10100:
    case 10200:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ServerMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerMsgID_descriptor_;
}
bool ServerMsgID_IsValid(int value) {
  switch(value) {
    case 50000:
    case 50001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

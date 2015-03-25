// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "demo.pb.h"

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

const ::google::protobuf::Descriptor* DemoClientReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DemoClientReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* DemoServerAsk_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DemoServerAsk_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_demo_2eproto() {
  protobuf_AddDesc_demo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "demo.proto");
  GOOGLE_CHECK(file != NULL);
  DemoClientReq_descriptor_ = file->message_type(0);
  static const int DemoClientReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoClientReq, text_),
  };
  DemoClientReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DemoClientReq_descriptor_,
      DemoClientReq::default_instance_,
      DemoClientReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoClientReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoClientReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DemoClientReq));
  DemoServerAsk_descriptor_ = file->message_type(1);
  static const int DemoServerAsk_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoServerAsk, text_),
  };
  DemoServerAsk_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DemoServerAsk_descriptor_,
      DemoServerAsk::default_instance_,
      DemoServerAsk_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoServerAsk, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DemoServerAsk, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DemoServerAsk));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_demo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DemoClientReq_descriptor_, &DemoClientReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DemoServerAsk_descriptor_, &DemoServerAsk::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_demo_2eproto() {
  delete DemoClientReq::default_instance_;
  delete DemoClientReq_reflection_;
  delete DemoServerAsk::default_instance_;
  delete DemoServerAsk_reflection_;
}

void protobuf_AddDesc_demo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ndemo.proto\"\035\n\rDemoClientReq\022\014\n\004text\030\001 "
    "\002(\t\"\035\n\rDemoServerAsk\022\014\n\004text\030\001 \002(\t", 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "demo.proto", &protobuf_RegisterTypes);
  DemoClientReq::default_instance_ = new DemoClientReq();
  DemoServerAsk::default_instance_ = new DemoServerAsk();
  DemoClientReq::default_instance_->InitAsDefaultInstance();
  DemoServerAsk::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_demo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_demo_2eproto {
  StaticDescriptorInitializer_demo_2eproto() {
    protobuf_AddDesc_demo_2eproto();
  }
} static_descriptor_initializer_demo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DemoClientReq::kTextFieldNumber;
#endif  // !_MSC_VER

DemoClientReq::DemoClientReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DemoClientReq::InitAsDefaultInstance() {
}

DemoClientReq::DemoClientReq(const DemoClientReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DemoClientReq::SharedCtor() {
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DemoClientReq::~DemoClientReq() {
  SharedDtor();
}

void DemoClientReq::SharedDtor() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void DemoClientReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DemoClientReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DemoClientReq_descriptor_;
}

const DemoClientReq& DemoClientReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demo_2eproto();
  return *default_instance_;
}

DemoClientReq* DemoClientReq::default_instance_ = NULL;

DemoClientReq* DemoClientReq::New() const {
  return new DemoClientReq;
}

void DemoClientReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_text()) {
      if (text_ != &::google::protobuf::internal::kEmptyString) {
        text_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DemoClientReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string text = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DemoClientReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->text(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DemoClientReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DemoClientReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DemoClientReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DemoClientReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DemoClientReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DemoClientReq::MergeFrom(const DemoClientReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DemoClientReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DemoClientReq::CopyFrom(const DemoClientReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DemoClientReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void DemoClientReq::Swap(DemoClientReq* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DemoClientReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DemoClientReq_descriptor_;
  metadata.reflection = DemoClientReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DemoServerAsk::kTextFieldNumber;
#endif  // !_MSC_VER

DemoServerAsk::DemoServerAsk()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DemoServerAsk::InitAsDefaultInstance() {
}

DemoServerAsk::DemoServerAsk(const DemoServerAsk& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DemoServerAsk::SharedCtor() {
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DemoServerAsk::~DemoServerAsk() {
  SharedDtor();
}

void DemoServerAsk::SharedDtor() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void DemoServerAsk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DemoServerAsk::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DemoServerAsk_descriptor_;
}

const DemoServerAsk& DemoServerAsk::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demo_2eproto();
  return *default_instance_;
}

DemoServerAsk* DemoServerAsk::default_instance_ = NULL;

DemoServerAsk* DemoServerAsk::New() const {
  return new DemoServerAsk;
}

void DemoServerAsk::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_text()) {
      if (text_ != &::google::protobuf::internal::kEmptyString) {
        text_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DemoServerAsk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string text = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DemoServerAsk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->text(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DemoServerAsk::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DemoServerAsk::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DemoServerAsk::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DemoServerAsk* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DemoServerAsk*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DemoServerAsk::MergeFrom(const DemoServerAsk& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DemoServerAsk::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DemoServerAsk::CopyFrom(const DemoServerAsk& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DemoServerAsk::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void DemoServerAsk::Swap(DemoServerAsk* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DemoServerAsk::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DemoServerAsk_descriptor_;
  metadata.reflection = DemoServerAsk_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

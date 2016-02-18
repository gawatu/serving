/* Copyright 2016 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mnist_inference.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mnist_inference.pb.h"

#include <algorithm>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {
namespace serving {

namespace {

const ::google::protobuf::Descriptor* MnistRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MnistRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* MnistResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MnistResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_mnist_5finference_2eproto() {
  protobuf_AddDesc_mnist_5finference_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mnist_inference.proto");
  GOOGLE_CHECK(file != NULL);
  MnistRequest_descriptor_ = file->message_type(0);
  static const int MnistRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistRequest, image_data_),
  };
  MnistRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MnistRequest_descriptor_,
      MnistRequest::default_instance_,
      MnistRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(MnistRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistRequest, _is_default_instance_));
  MnistResponse_descriptor_ = file->message_type(1);
  static const int MnistResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistResponse, value_),
  };
  MnistResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MnistResponse_descriptor_,
      MnistResponse::default_instance_,
      MnistResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(MnistResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MnistResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mnist_5finference_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MnistRequest_descriptor_, &MnistRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MnistResponse_descriptor_, &MnistResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mnist_5finference_2eproto() {
  delete MnistRequest::default_instance_;
  delete MnistRequest_reflection_;
  delete MnistResponse::default_instance_;
  delete MnistResponse_reflection_;
}

void protobuf_AddDesc_mnist_5finference_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025mnist_inference.proto\022\022tensorflow.serv"
    "ing\"&\n\014MnistRequest\022\026\n\nimage_data\030\001 \003(\002B"
    "\002\020\001\"\"\n\rMnistResponse\022\021\n\005value\030\001 \003(\002B\002\020\0012"
    "_\n\014MnistService\022O\n\010Classify\022 .tensorflow"
    ".serving.MnistRequest\032!.tensorflow.servi"
    "ng.MnistResponseb\006proto3", 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mnist_inference.proto", &protobuf_RegisterTypes);
  MnistRequest::default_instance_ = new MnistRequest();
  MnistResponse::default_instance_ = new MnistResponse();
  MnistRequest::default_instance_->InitAsDefaultInstance();
  MnistResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mnist_5finference_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mnist_5finference_2eproto {
  StaticDescriptorInitializer_mnist_5finference_2eproto() {
    protobuf_AddDesc_mnist_5finference_2eproto();
  }
} static_descriptor_initializer_mnist_5finference_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MnistRequest::kImageDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MnistRequest::MnistRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.MnistRequest)
}

void MnistRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MnistRequest::MnistRequest(const MnistRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.MnistRequest)
}

void MnistRequest::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

MnistRequest::~MnistRequest() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.MnistRequest)
  SharedDtor();
}

void MnistRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MnistRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MnistRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MnistRequest_descriptor_;
}

const MnistRequest& MnistRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mnist_5finference_2eproto();
  return *default_instance_;
}

MnistRequest* MnistRequest::default_instance_ = NULL;

MnistRequest* MnistRequest::New(::google::protobuf::Arena* arena) const {
  MnistRequest* n = new MnistRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MnistRequest::Clear() {
  image_data_.Clear();
}

bool MnistRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.serving.MnistRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float image_data = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_image_data())));
        } else if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10, input, this->mutable_image_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.serving.MnistRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.serving.MnistRequest)
  return false;
#undef DO_
}

void MnistRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.serving.MnistRequest)
  // repeated float image_data = 1 [packed = true];
  if (this->image_data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_image_data_cached_byte_size_);
  }
  for (int i = 0; i < this->image_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->image_data(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.serving.MnistRequest)
}

::google::protobuf::uint8* MnistRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.MnistRequest)
  // repeated float image_data = 1 [packed = true];
  if (this->image_data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _image_data_cached_byte_size_, target);
  }
  for (int i = 0; i < this->image_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->image_data(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.MnistRequest)
  return target;
}

int MnistRequest::ByteSize() const {
  int total_size = 0;

  // repeated float image_data = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->image_data_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _image_data_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MnistRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MnistRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MnistRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MnistRequest::MergeFrom(const MnistRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  image_data_.MergeFrom(from.image_data_);
}

void MnistRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MnistRequest::CopyFrom(const MnistRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MnistRequest::IsInitialized() const {

  return true;
}

void MnistRequest::Swap(MnistRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MnistRequest::InternalSwap(MnistRequest* other) {
  image_data_.UnsafeArenaSwap(&other->image_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MnistRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MnistRequest_descriptor_;
  metadata.reflection = MnistRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MnistRequest

// repeated float image_data = 1 [packed = true];
int MnistRequest::image_data_size() const {
  return image_data_.size();
}
void MnistRequest::clear_image_data() {
  image_data_.Clear();
}
 float MnistRequest::image_data(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.MnistRequest.image_data)
  return image_data_.Get(index);
}
 void MnistRequest::set_image_data(int index, float value) {
  image_data_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.MnistRequest.image_data)
}
 void MnistRequest::add_image_data(float value) {
  image_data_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.MnistRequest.image_data)
}
 const ::google::protobuf::RepeatedField< float >&
MnistRequest::image_data() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.MnistRequest.image_data)
  return image_data_;
}
 ::google::protobuf::RepeatedField< float >*
MnistRequest::mutable_image_data() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.MnistRequest.image_data)
  return &image_data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MnistResponse::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MnistResponse::MnistResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.MnistResponse)
}

void MnistResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MnistResponse::MnistResponse(const MnistResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.MnistResponse)
}

void MnistResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

MnistResponse::~MnistResponse() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.MnistResponse)
  SharedDtor();
}

void MnistResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MnistResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MnistResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MnistResponse_descriptor_;
}

const MnistResponse& MnistResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mnist_5finference_2eproto();
  return *default_instance_;
}

MnistResponse* MnistResponse::default_instance_ = NULL;

MnistResponse* MnistResponse::New(::google::protobuf::Arena* arena) const {
  MnistResponse* n = new MnistResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MnistResponse::Clear() {
  value_.Clear();
}

bool MnistResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.serving.MnistResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float value = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_value())));
        } else if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10, input, this->mutable_value())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.serving.MnistResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.serving.MnistResponse)
  return false;
#undef DO_
}

void MnistResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.serving.MnistResponse)
  // repeated float value = 1 [packed = true];
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_value_cached_byte_size_);
  }
  for (int i = 0; i < this->value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->value(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.serving.MnistResponse)
}

::google::protobuf::uint8* MnistResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.MnistResponse)
  // repeated float value = 1 [packed = true];
  if (this->value_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _value_cached_byte_size_, target);
  }
  for (int i = 0; i < this->value_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->value(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.MnistResponse)
  return target;
}

int MnistResponse::ByteSize() const {
  int total_size = 0;

  // repeated float value = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->value_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MnistResponse::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MnistResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MnistResponse>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MnistResponse::MergeFrom(const MnistResponse& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  value_.MergeFrom(from.value_);
}

void MnistResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MnistResponse::CopyFrom(const MnistResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MnistResponse::IsInitialized() const {

  return true;
}

void MnistResponse::Swap(MnistResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MnistResponse::InternalSwap(MnistResponse* other) {
  value_.UnsafeArenaSwap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MnistResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MnistResponse_descriptor_;
  metadata.reflection = MnistResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MnistResponse

// repeated float value = 1 [packed = true];
int MnistResponse::value_size() const {
  return value_.size();
}
void MnistResponse::clear_value() {
  value_.Clear();
}
 float MnistResponse::value(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.MnistResponse.value)
  return value_.Get(index);
}
 void MnistResponse::set_value(int index, float value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.MnistResponse.value)
}
 void MnistResponse::add_value(float value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.MnistResponse.value)
}
 const ::google::protobuf::RepeatedField< float >&
MnistResponse::value() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.MnistResponse.value)
  return value_;
}
 ::google::protobuf::RepeatedField< float >*
MnistResponse::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.MnistResponse.value)
  return &value_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

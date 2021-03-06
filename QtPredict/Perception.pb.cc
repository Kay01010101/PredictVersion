// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Perception.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Perception.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_Perception_2eproto() {
  delete SuccInfo::default_instance_;
  delete Node::default_instance_;
  delete Perception::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_Perception_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_Perception_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SuccInfo::default_instance_ = new SuccInfo();
  Node::default_instance_ = new Node();
  Perception::default_instance_ = new Perception();
  SuccInfo::default_instance_->InitAsDefaultInstance();
  Node::default_instance_->InitAsDefaultInstance();
  Perception::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Perception_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Perception_2eproto_once_);
void protobuf_AddDesc_Perception_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Perception_2eproto_once_,
                 &protobuf_AddDesc_Perception_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Perception_2eproto {
  StaticDescriptorInitializer_Perception_2eproto() {
    protobuf_AddDesc_Perception_2eproto();
  }
} static_descriptor_initializer_Perception_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SuccInfo::kIdFieldNumber;
const int SuccInfo::kCpFieldNumber;
const int SuccInfo::kIsNextFieldNumber;
#endif  // !_MSC_VER

SuccInfo::SuccInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SuccInfo::InitAsDefaultInstance() {
}

SuccInfo::SuccInfo(const SuccInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SuccInfo::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  cp_ = 0;
  isnext_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SuccInfo::~SuccInfo() {
  SharedDtor();
}

void SuccInfo::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SuccInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SuccInfo& SuccInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Perception_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Perception_2eproto();
#endif
  return *default_instance_;
}

SuccInfo* SuccInfo::default_instance_ = NULL;

SuccInfo* SuccInfo::New() const {
  return new SuccInfo;
}

void SuccInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    cp_ = 0;
    isnext_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SuccInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_cp;
        break;
      }

      // required float cp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_cp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &cp_)));
          set_has_cp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_isNext;
        break;
      }

      // optional bool isNext = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isNext:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isnext_)));
          set_has_isnext();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SuccInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required float cp = 2;
  if (has_cp()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->cp(), output);
  }

  // optional bool isNext = 3;
  if (has_isnext()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->isnext(), output);
  }

}

int SuccInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required float cp = 2;
    if (has_cp()) {
      total_size += 1 + 4;
    }

    // optional bool isNext = 3;
    if (has_isnext()) {
      total_size += 1 + 1;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SuccInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SuccInfo*>(&from));
}

void SuccInfo::MergeFrom(const SuccInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_cp()) {
      set_cp(from.cp());
    }
    if (from.has_isnext()) {
      set_isnext(from.isnext());
    }
  }
}

void SuccInfo::CopyFrom(const SuccInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SuccInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void SuccInfo::Swap(SuccInfo* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(cp_, other->cp_);
    std::swap(isnext_, other->isnext_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SuccInfo::GetTypeName() const {
  return "SuccInfo";
}


// ===================================================================

#ifndef _MSC_VER
const int Node::kIdFieldNumber;
const int Node::kUniqKeyFieldNumber;
const int Node::kKeysFieldNumber;
const int Node::kSuccinfoFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Node::InitAsDefaultInstance() {
}

Node::Node(const Node& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Node::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  uniqkey_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  SharedDtor();
}

void Node::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Node& Node::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Perception_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Perception_2eproto();
#endif
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New() const {
  return new Node;
}

void Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    uniqkey_ = GOOGLE_ULONGLONG(0);
  }
  keys_.Clear();
  succinfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_uniqKey;
        break;
      }

      // required uint64 uniqKey = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uniqKey:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &uniqkey_)));
          set_has_uniqkey();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_keys;
        break;
      }

      // repeated uint64 keys = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_keys:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 24, input, this->mutable_keys())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_keys())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_keys;
        if (input->ExpectTag(34)) goto parse_succinfo;
        break;
      }

      // repeated .SuccInfo succinfo = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_succinfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_succinfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_succinfo;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required uint64 uniqKey = 2;
  if (has_uniqkey()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->uniqkey(), output);
  }

  // repeated uint64 keys = 3;
  for (int i = 0; i < this->keys_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      3, this->keys(i), output);
  }

  // repeated .SuccInfo succinfo = 4;
  for (int i = 0; i < this->succinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->succinfo(i), output);
  }

}

int Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required uint64 uniqKey = 2;
    if (has_uniqkey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->uniqkey());
    }

  }
  // repeated uint64 keys = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->keys_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->keys(i));
    }
    total_size += 1 * this->keys_size() + data_size;
  }

  // repeated .SuccInfo succinfo = 4;
  total_size += 1 * this->succinfo_size();
  for (int i = 0; i < this->succinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->succinfo(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Node*>(&from));
}

void Node::MergeFrom(const Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  keys_.MergeFrom(from.keys_);
  succinfo_.MergeFrom(from.succinfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_uniqkey()) {
      set_uniqkey(from.uniqkey());
    }
  }
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < succinfo_size(); i++) {
    if (!this->succinfo(i).IsInitialized()) return false;
  }
  return true;
}

void Node::Swap(Node* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(uniqkey_, other->uniqkey_);
    keys_.Swap(&other->keys_);
    succinfo_.Swap(&other->succinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Node::GetTypeName() const {
  return "Node";
}


// ===================================================================

#ifndef _MSC_VER
const int Perception::kNodeNumFieldNumber;
const int Perception::kNodesFieldNumber;
#endif  // !_MSC_VER

Perception::Perception()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Perception::InitAsDefaultInstance() {
}

Perception::Perception(const Perception& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Perception::SharedCtor() {
  _cached_size_ = 0;
  nodenum_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Perception::~Perception() {
  SharedDtor();
}

void Perception::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void Perception::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Perception& Perception::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Perception_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Perception_2eproto();
#endif
  return *default_instance_;
}

Perception* Perception::default_instance_ = NULL;

Perception* Perception::New() const {
  return new Perception;
}

void Perception::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    nodenum_ = 0;
  }
  nodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Perception::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 nodeNum = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nodenum_)));
          set_has_nodenum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nodes;
        break;
      }

      // repeated .Node nodes = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nodes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_nodes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nodes;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Perception::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 nodeNum = 1;
  if (has_nodenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->nodenum(), output);
  }

  // repeated .Node nodes = 2;
  for (int i = 0; i < this->nodes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->nodes(i), output);
  }

}

int Perception::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 nodeNum = 1;
    if (has_nodenum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->nodenum());
    }

  }
  // repeated .Node nodes = 2;
  total_size += 1 * this->nodes_size();
  for (int i = 0; i < this->nodes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->nodes(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Perception::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Perception*>(&from));
}

void Perception::MergeFrom(const Perception& from) {
  GOOGLE_CHECK_NE(&from, this);
  nodes_.MergeFrom(from.nodes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_nodenum()) {
      set_nodenum(from.nodenum());
    }
  }
}

void Perception::CopyFrom(const Perception& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Perception::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < nodes_size(); i++) {
    if (!this->nodes(i).IsInitialized()) return false;
  }
  return true;
}

void Perception::Swap(Perception* other) {
  if (other != this) {
    std::swap(nodenum_, other->nodenum_);
    nodes_.Swap(&other->nodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Perception::GetTypeName() const {
  return "Perception";
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

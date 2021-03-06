// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PrintRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PrintRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PrintRequest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PrintRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PrintRequest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PrintRequest_2eproto;
class PrintRequest;
class PrintRequestDefaultTypeInternal;
extern PrintRequestDefaultTypeInternal _PrintRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::PrintRequest* Arena::CreateMaybeMessage<::PrintRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class PrintRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PrintRequest) */ {
 public:
  PrintRequest();
  virtual ~PrintRequest();

  PrintRequest(const PrintRequest& from);
  PrintRequest(PrintRequest&& from) noexcept
    : PrintRequest() {
    *this = ::std::move(from);
  }

  inline PrintRequest& operator=(const PrintRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrintRequest& operator=(PrintRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PrintRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PrintRequest* internal_default_instance() {
    return reinterpret_cast<const PrintRequest*>(
               &_PrintRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PrintRequest& a, PrintRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PrintRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PrintRequest* New() const final {
    return CreateMaybeMessage<PrintRequest>(nullptr);
  }

  PrintRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PrintRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PrintRequest& from);
  void MergeFrom(const PrintRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PrintRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PrintRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PrintRequest_2eproto);
    return ::descriptor_table_PrintRequest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstOperandFieldNumber = 1,
  };
  // string FirstOperand = 1;
  void clear_firstoperand();
  const std::string& firstoperand() const;
  void set_firstoperand(const std::string& value);
  void set_firstoperand(std::string&& value);
  void set_firstoperand(const char* value);
  void set_firstoperand(const char* value, size_t size);
  std::string* mutable_firstoperand();
  std::string* release_firstoperand();
  void set_allocated_firstoperand(std::string* firstoperand);
  private:
  const std::string& _internal_firstoperand() const;
  void _internal_set_firstoperand(const std::string& value);
  std::string* _internal_mutable_firstoperand();
  public:

  // @@protoc_insertion_point(class_scope:PrintRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr firstoperand_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PrintRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PrintRequest

// string FirstOperand = 1;
inline void PrintRequest::clear_firstoperand() {
  firstoperand_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PrintRequest::firstoperand() const {
  // @@protoc_insertion_point(field_get:PrintRequest.FirstOperand)
  return _internal_firstoperand();
}
inline void PrintRequest::set_firstoperand(const std::string& value) {
  _internal_set_firstoperand(value);
  // @@protoc_insertion_point(field_set:PrintRequest.FirstOperand)
}
inline std::string* PrintRequest::mutable_firstoperand() {
  // @@protoc_insertion_point(field_mutable:PrintRequest.FirstOperand)
  return _internal_mutable_firstoperand();
}
inline const std::string& PrintRequest::_internal_firstoperand() const {
  return firstoperand_.GetNoArena();
}
inline void PrintRequest::_internal_set_firstoperand(const std::string& value) {
  
  firstoperand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PrintRequest::set_firstoperand(std::string&& value) {
  
  firstoperand_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PrintRequest.FirstOperand)
}
inline void PrintRequest::set_firstoperand(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  firstoperand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PrintRequest.FirstOperand)
}
inline void PrintRequest::set_firstoperand(const char* value, size_t size) {
  
  firstoperand_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PrintRequest.FirstOperand)
}
inline std::string* PrintRequest::_internal_mutable_firstoperand() {
  
  return firstoperand_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PrintRequest::release_firstoperand() {
  // @@protoc_insertion_point(field_release:PrintRequest.FirstOperand)
  
  return firstoperand_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PrintRequest::set_allocated_firstoperand(std::string* firstoperand) {
  if (firstoperand != nullptr) {
    
  } else {
    
  }
  firstoperand_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), firstoperand);
  // @@protoc_insertion_point(field_set_allocated:PrintRequest.FirstOperand)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PrintRequest_2eproto

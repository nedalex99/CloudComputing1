// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PrintResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PrintResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PrintResponse_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_PrintResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PrintResponse_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PrintResponse_2eproto;
class PrintResponse;
class PrintResponseDefaultTypeInternal;
extern PrintResponseDefaultTypeInternal _PrintResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::PrintResponse* Arena::CreateMaybeMessage<::PrintResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class PrintResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PrintResponse) */ {
 public:
  PrintResponse();
  virtual ~PrintResponse();

  PrintResponse(const PrintResponse& from);
  PrintResponse(PrintResponse&& from) noexcept
    : PrintResponse() {
    *this = ::std::move(from);
  }

  inline PrintResponse& operator=(const PrintResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrintResponse& operator=(PrintResponse&& from) noexcept {
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
  static const PrintResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PrintResponse* internal_default_instance() {
    return reinterpret_cast<const PrintResponse*>(
               &_PrintResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PrintResponse& a, PrintResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(PrintResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PrintResponse* New() const final {
    return CreateMaybeMessage<PrintResponse>(nullptr);
  }

  PrintResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PrintResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PrintResponse& from);
  void MergeFrom(const PrintResponse& from);
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
  void InternalSwap(PrintResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PrintResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PrintResponse_2eproto);
    return ::descriptor_table_PrintResponse_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  void set_result(const std::string& value);
  void set_result(std::string&& value);
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  std::string* mutable_result();
  std::string* release_result();
  void set_allocated_result(std::string* result);
  private:
  const std::string& _internal_result() const;
  void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:PrintResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PrintResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PrintResponse

// string result = 1;
inline void PrintResponse::clear_result() {
  result_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PrintResponse::result() const {
  // @@protoc_insertion_point(field_get:PrintResponse.result)
  return _internal_result();
}
inline void PrintResponse::set_result(const std::string& value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:PrintResponse.result)
}
inline std::string* PrintResponse::mutable_result() {
  // @@protoc_insertion_point(field_mutable:PrintResponse.result)
  return _internal_mutable_result();
}
inline const std::string& PrintResponse::_internal_result() const {
  return result_.GetNoArena();
}
inline void PrintResponse::_internal_set_result(const std::string& value) {
  
  result_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PrintResponse::set_result(std::string&& value) {
  
  result_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PrintResponse.result)
}
inline void PrintResponse::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PrintResponse.result)
}
inline void PrintResponse::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PrintResponse.result)
}
inline std::string* PrintResponse::_internal_mutable_result() {
  
  return result_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PrintResponse::release_result() {
  // @@protoc_insertion_point(field_release:PrintResponse.result)
  
  return result_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PrintResponse::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:PrintResponse.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PrintResponse_2eproto

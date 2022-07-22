// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Engine1Specific.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Engine1Specific_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Engine1Specific_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Engine1Specific_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Engine1Specific_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Engine1Specific_2eproto;
class Engine1Specific;
struct Engine1SpecificDefaultTypeInternal;
extern Engine1SpecificDefaultTypeInternal _Engine1Specific_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Engine1Specific* Arena::CreateMaybeMessage<::Engine1Specific>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Engine1Specific final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Engine1Specific) */ {
 public:
  inline Engine1Specific() : Engine1Specific(nullptr) {}
  ~Engine1Specific() override;
  explicit constexpr Engine1Specific(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Engine1Specific(const Engine1Specific& from);
  Engine1Specific(Engine1Specific&& from) noexcept
    : Engine1Specific() {
    *this = ::std::move(from);
  }

  inline Engine1Specific& operator=(const Engine1Specific& from) {
    CopyFrom(from);
    return *this;
  }
  inline Engine1Specific& operator=(Engine1Specific&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Engine1Specific& default_instance() {
    return *internal_default_instance();
  }
  static inline const Engine1Specific* internal_default_instance() {
    return reinterpret_cast<const Engine1Specific*>(
               &_Engine1Specific_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Engine1Specific& a, Engine1Specific& b) {
    a.Swap(&b);
  }
  inline void Swap(Engine1Specific* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Engine1Specific* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Engine1Specific* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Engine1Specific>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Engine1Specific& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Engine1Specific& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Engine1Specific* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Engine1Specific";
  }
  protected:
  explicit Engine1Specific(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kField1FieldNumber = 2,
    kField2FieldNumber = 3,
    kField3FieldNumber = 4,
    kEnabledFieldNumber = 1,
  };
  // double field1 = 2;
  void clear_field1();
  double field1() const;
  void set_field1(double value);
  private:
  double _internal_field1() const;
  void _internal_set_field1(double value);
  public:

  // double field2 = 3;
  void clear_field2();
  double field2() const;
  void set_field2(double value);
  private:
  double _internal_field2() const;
  void _internal_set_field2(double value);
  public:

  // double field3 = 4;
  void clear_field3();
  double field3() const;
  void set_field3(double value);
  private:
  double _internal_field3() const;
  void _internal_set_field3(double value);
  public:

  // bool enabled = 1;
  void clear_enabled();
  bool enabled() const;
  void set_enabled(bool value);
  private:
  bool _internal_enabled() const;
  void _internal_set_enabled(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Engine1Specific)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double field1_;
  double field2_;
  double field3_;
  bool enabled_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Engine1Specific_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Engine1Specific

// bool enabled = 1;
inline void Engine1Specific::clear_enabled() {
  enabled_ = false;
}
inline bool Engine1Specific::_internal_enabled() const {
  return enabled_;
}
inline bool Engine1Specific::enabled() const {
  // @@protoc_insertion_point(field_get:Engine1Specific.enabled)
  return _internal_enabled();
}
inline void Engine1Specific::_internal_set_enabled(bool value) {
  
  enabled_ = value;
}
inline void Engine1Specific::set_enabled(bool value) {
  _internal_set_enabled(value);
  // @@protoc_insertion_point(field_set:Engine1Specific.enabled)
}

// double field1 = 2;
inline void Engine1Specific::clear_field1() {
  field1_ = 0;
}
inline double Engine1Specific::_internal_field1() const {
  return field1_;
}
inline double Engine1Specific::field1() const {
  // @@protoc_insertion_point(field_get:Engine1Specific.field1)
  return _internal_field1();
}
inline void Engine1Specific::_internal_set_field1(double value) {
  
  field1_ = value;
}
inline void Engine1Specific::set_field1(double value) {
  _internal_set_field1(value);
  // @@protoc_insertion_point(field_set:Engine1Specific.field1)
}

// double field2 = 3;
inline void Engine1Specific::clear_field2() {
  field2_ = 0;
}
inline double Engine1Specific::_internal_field2() const {
  return field2_;
}
inline double Engine1Specific::field2() const {
  // @@protoc_insertion_point(field_get:Engine1Specific.field2)
  return _internal_field2();
}
inline void Engine1Specific::_internal_set_field2(double value) {
  
  field2_ = value;
}
inline void Engine1Specific::set_field2(double value) {
  _internal_set_field2(value);
  // @@protoc_insertion_point(field_set:Engine1Specific.field2)
}

// double field3 = 4;
inline void Engine1Specific::clear_field3() {
  field3_ = 0;
}
inline double Engine1Specific::_internal_field3() const {
  return field3_;
}
inline double Engine1Specific::field3() const {
  // @@protoc_insertion_point(field_get:Engine1Specific.field3)
  return _internal_field3();
}
inline void Engine1Specific::_internal_set_field3(double value) {
  
  field3_ = value;
}
inline void Engine1Specific::set_field3(double value) {
  _internal_set_field3(value);
  // @@protoc_insertion_point(field_set:Engine1Specific.field3)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Engine1Specific_2eproto
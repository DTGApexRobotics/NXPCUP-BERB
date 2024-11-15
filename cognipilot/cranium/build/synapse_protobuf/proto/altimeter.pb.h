// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: altimeter.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_altimeter_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_altimeter_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_altimeter_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_altimeter_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_altimeter_2eproto;
namespace synapse {
namespace msgs {
class Altimeter;
class AltimeterDefaultTypeInternal;
extern AltimeterDefaultTypeInternal _Altimeter_default_instance_;
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> ::synapse::msgs::Altimeter* Arena::CreateMaybeMessage<::synapse::msgs::Altimeter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace synapse {
namespace msgs {

// ===================================================================

class Altimeter PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:synapse.msgs.Altimeter) */ {
 public:
  inline Altimeter() : Altimeter(nullptr) {};
  virtual ~Altimeter();

  Altimeter(const Altimeter& from);
  Altimeter(Altimeter&& from) noexcept
    : Altimeter() {
    *this = ::std::move(from);
  }

  inline Altimeter& operator=(const Altimeter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Altimeter& operator=(Altimeter&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Altimeter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Altimeter* internal_default_instance() {
    return reinterpret_cast<const Altimeter*>(
               &_Altimeter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Altimeter& a, Altimeter& b) {
    a.Swap(&b);
  }
  inline void Swap(Altimeter* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Altimeter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Altimeter* New() const final {
    return CreateMaybeMessage<Altimeter>(nullptr);
  }

  Altimeter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Altimeter>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Altimeter& from);
  void MergeFrom(const Altimeter& from);
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
  void InternalSwap(Altimeter* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "synapse.msgs.Altimeter";
  }
  protected:
  explicit Altimeter(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_altimeter_2eproto);
    return ::descriptor_table_altimeter_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kVerticalPositionFieldNumber = 2,
    kVerticalVelocityFieldNumber = 3,
    kVerticalReferenceFieldNumber = 4,
  };
  // .synapse.msgs.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::synapse::msgs::Header& header() const;
  ::synapse::msgs::Header* release_header();
  ::synapse::msgs::Header* mutable_header();
  void set_allocated_header(::synapse::msgs::Header* header);
  private:
  const ::synapse::msgs::Header& _internal_header() const;
  ::synapse::msgs::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::synapse::msgs::Header* header);
  ::synapse::msgs::Header* unsafe_arena_release_header();

  // double vertical_position = 2;
  void clear_vertical_position();
  double vertical_position() const;
  void set_vertical_position(double value);
  private:
  double _internal_vertical_position() const;
  void _internal_set_vertical_position(double value);
  public:

  // double vertical_velocity = 3;
  void clear_vertical_velocity();
  double vertical_velocity() const;
  void set_vertical_velocity(double value);
  private:
  double _internal_vertical_velocity() const;
  void _internal_set_vertical_velocity(double value);
  public:

  // double vertical_reference = 4;
  void clear_vertical_reference();
  double vertical_reference() const;
  void set_vertical_reference(double value);
  private:
  double _internal_vertical_reference() const;
  void _internal_set_vertical_reference(double value);
  public:

  // @@protoc_insertion_point(class_scope:synapse.msgs.Altimeter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::synapse::msgs::Header* header_;
  double vertical_position_;
  double vertical_velocity_;
  double vertical_reference_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_altimeter_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Altimeter

// .synapse.msgs.Header header = 1;
inline bool Altimeter::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool Altimeter::has_header() const {
  return _internal_has_header();
}
inline const ::synapse::msgs::Header& Altimeter::_internal_header() const {
  const ::synapse::msgs::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::synapse::msgs::Header*>(
      &::synapse::msgs::_Header_default_instance_);
}
inline const ::synapse::msgs::Header& Altimeter::header() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Altimeter.header)
  return _internal_header();
}
inline void Altimeter::unsafe_arena_set_allocated_header(
    ::synapse::msgs::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Altimeter.header)
}
inline ::synapse::msgs::Header* Altimeter::release_header() {
  auto temp = unsafe_arena_release_header();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::synapse::msgs::Header* Altimeter::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Altimeter.header)
  
  ::synapse::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::synapse::msgs::Header* Altimeter::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::synapse::msgs::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::synapse::msgs::Header* Altimeter::mutable_header() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Altimeter.header)
  return _internal_mutable_header();
}
inline void Altimeter::set_allocated_header(::synapse::msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Altimeter.header)
}

// double vertical_position = 2;
inline void Altimeter::clear_vertical_position() {
  vertical_position_ = 0;
}
inline double Altimeter::_internal_vertical_position() const {
  return vertical_position_;
}
inline double Altimeter::vertical_position() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Altimeter.vertical_position)
  return _internal_vertical_position();
}
inline void Altimeter::_internal_set_vertical_position(double value) {
  
  vertical_position_ = value;
}
inline void Altimeter::set_vertical_position(double value) {
  _internal_set_vertical_position(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Altimeter.vertical_position)
}

// double vertical_velocity = 3;
inline void Altimeter::clear_vertical_velocity() {
  vertical_velocity_ = 0;
}
inline double Altimeter::_internal_vertical_velocity() const {
  return vertical_velocity_;
}
inline double Altimeter::vertical_velocity() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Altimeter.vertical_velocity)
  return _internal_vertical_velocity();
}
inline void Altimeter::_internal_set_vertical_velocity(double value) {
  
  vertical_velocity_ = value;
}
inline void Altimeter::set_vertical_velocity(double value) {
  _internal_set_vertical_velocity(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Altimeter.vertical_velocity)
}

// double vertical_reference = 4;
inline void Altimeter::clear_vertical_reference() {
  vertical_reference_ = 0;
}
inline double Altimeter::_internal_vertical_reference() const {
  return vertical_reference_;
}
inline double Altimeter::vertical_reference() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Altimeter.vertical_reference)
  return _internal_vertical_reference();
}
inline void Altimeter::_internal_set_vertical_reference(double value) {
  
  vertical_reference_ = value;
}
inline void Altimeter::set_vertical_reference(double value) {
  _internal_set_vertical_reference(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Altimeter.vertical_reference)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace synapse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_altimeter_2eproto

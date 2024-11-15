// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: twist_with_covariance.proto

#include "twist_with_covariance.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_twist_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Twist_twist_2eproto;
namespace synapse {
namespace msgs {
class TwistWithCovarianceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TwistWithCovariance> _instance;
} _TwistWithCovariance_default_instance_;
}  // namespace msgs
}  // namespace synapse
static void InitDefaultsscc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::synapse::msgs::_TwistWithCovariance_default_instance_;
    new (ptr) ::synapse::msgs::TwistWithCovariance();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::synapse::msgs::TwistWithCovariance::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto}, {
      &scc_info_Twist_twist_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_twist_5fwith_5fcovariance_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_twist_5fwith_5fcovariance_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_twist_5fwith_5fcovariance_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_twist_5fwith_5fcovariance_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::TwistWithCovariance, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::TwistWithCovariance, twist_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::TwistWithCovariance, covariance_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::synapse::msgs::TwistWithCovariance)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::synapse::msgs::_TwistWithCovariance_default_instance_),
};

const char descriptor_table_protodef_twist_5fwith_5fcovariance_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033twist_with_covariance.proto\022\014synapse.m"
  "sgs\032\013twist.proto\"M\n\023TwistWithCovariance\022"
  "\"\n\005twist\030\001 \001(\0132\023.synapse.msgs.Twist\022\022\n\nc"
  "ovariance\030\002 \003(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_twist_5fwith_5fcovariance_2eproto_deps[1] = {
  &::descriptor_table_twist_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_twist_5fwith_5fcovariance_2eproto_sccs[1] = {
  &scc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_twist_5fwith_5fcovariance_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_twist_5fwith_5fcovariance_2eproto = {
  false, false, descriptor_table_protodef_twist_5fwith_5fcovariance_2eproto, "twist_with_covariance.proto", 143,
  &descriptor_table_twist_5fwith_5fcovariance_2eproto_once, descriptor_table_twist_5fwith_5fcovariance_2eproto_sccs, descriptor_table_twist_5fwith_5fcovariance_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_twist_5fwith_5fcovariance_2eproto::offsets,
  file_level_metadata_twist_5fwith_5fcovariance_2eproto, 1, file_level_enum_descriptors_twist_5fwith_5fcovariance_2eproto, file_level_service_descriptors_twist_5fwith_5fcovariance_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_twist_5fwith_5fcovariance_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_twist_5fwith_5fcovariance_2eproto)), true);
namespace synapse {
namespace msgs {

// ===================================================================

void TwistWithCovariance::InitAsDefaultInstance() {
  ::synapse::msgs::_TwistWithCovariance_default_instance_._instance.get_mutable()->twist_ = const_cast< ::synapse::msgs::Twist*>(
      ::synapse::msgs::Twist::internal_default_instance());
}
class TwistWithCovariance::_Internal {
 public:
  static const ::synapse::msgs::Twist& twist(const TwistWithCovariance* msg);
};

const ::synapse::msgs::Twist&
TwistWithCovariance::_Internal::twist(const TwistWithCovariance* msg) {
  return *msg->twist_;
}
void TwistWithCovariance::clear_twist() {
  if (GetArena() == nullptr && twist_ != nullptr) {
    delete twist_;
  }
  twist_ = nullptr;
}
TwistWithCovariance::TwistWithCovariance(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  covariance_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:synapse.msgs.TwistWithCovariance)
}
TwistWithCovariance::TwistWithCovariance(const TwistWithCovariance& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      covariance_(from.covariance_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_twist()) {
    twist_ = new ::synapse::msgs::Twist(*from.twist_);
  } else {
    twist_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:synapse.msgs.TwistWithCovariance)
}

void TwistWithCovariance::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto.base);
  twist_ = nullptr;
}

TwistWithCovariance::~TwistWithCovariance() {
  // @@protoc_insertion_point(destructor:synapse.msgs.TwistWithCovariance)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TwistWithCovariance::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete twist_;
}

void TwistWithCovariance::ArenaDtor(void* object) {
  TwistWithCovariance* _this = reinterpret_cast< TwistWithCovariance* >(object);
  (void)_this;
}
void TwistWithCovariance::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TwistWithCovariance::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TwistWithCovariance& TwistWithCovariance::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TwistWithCovariance_twist_5fwith_5fcovariance_2eproto.base);
  return *internal_default_instance();
}


void TwistWithCovariance::Clear() {
// @@protoc_insertion_point(message_clear_start:synapse.msgs.TwistWithCovariance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  covariance_.Clear();
  if (GetArena() == nullptr && twist_ != nullptr) {
    delete twist_;
  }
  twist_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TwistWithCovariance::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .synapse.msgs.Twist twist = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_twist(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double covariance = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17) {
          _internal_add_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TwistWithCovariance::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:synapse.msgs.TwistWithCovariance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .synapse.msgs.Twist twist = 1;
  if (this->has_twist()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::twist(this), target, stream);
  }

  // repeated double covariance = 2;
  if (this->_internal_covariance_size() > 0) {
    target = stream->WriteFixedPacked(2, _internal_covariance(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:synapse.msgs.TwistWithCovariance)
  return target;
}

size_t TwistWithCovariance::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:synapse.msgs.TwistWithCovariance)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated double covariance = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_covariance_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .synapse.msgs.Twist twist = 1;
  if (this->has_twist()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *twist_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TwistWithCovariance::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:synapse.msgs.TwistWithCovariance)
  GOOGLE_DCHECK_NE(&from, this);
  const TwistWithCovariance* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TwistWithCovariance>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:synapse.msgs.TwistWithCovariance)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:synapse.msgs.TwistWithCovariance)
    MergeFrom(*source);
  }
}

void TwistWithCovariance::MergeFrom(const TwistWithCovariance& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:synapse.msgs.TwistWithCovariance)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  covariance_.MergeFrom(from.covariance_);
  if (from.has_twist()) {
    _internal_mutable_twist()->::synapse::msgs::Twist::MergeFrom(from._internal_twist());
  }
}

void TwistWithCovariance::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:synapse.msgs.TwistWithCovariance)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TwistWithCovariance::CopyFrom(const TwistWithCovariance& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:synapse.msgs.TwistWithCovariance)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TwistWithCovariance::IsInitialized() const {
  return true;
}

void TwistWithCovariance::InternalSwap(TwistWithCovariance* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  covariance_.InternalSwap(&other->covariance_);
  swap(twist_, other->twist_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TwistWithCovariance::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::synapse::msgs::TwistWithCovariance* Arena::CreateMaybeMessage< ::synapse::msgs::TwistWithCovariance >(Arena* arena) {
  return Arena::CreateMessageInternal< ::synapse::msgs::TwistWithCovariance >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

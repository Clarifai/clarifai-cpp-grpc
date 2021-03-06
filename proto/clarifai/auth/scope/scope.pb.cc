// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clarifai/auth/scope/scope.proto

#include "proto/clarifai/auth/scope/scope.pb.h"

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
namespace clarifai {
namespace auth {
namespace scope {
class ScopeListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ScopeList> _instance;
} _ScopeList_default_instance_;
}  // namespace scope
}  // namespace auth
}  // namespace clarifai
static void InitDefaultsscc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::clarifai::auth::scope::_ScopeList_default_instance_;
    new (ptr) ::clarifai::auth::scope::ScopeList();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::clarifai::auth::scope::ScopeList::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::clarifai::auth::scope::ScopeList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::clarifai::auth::scope::ScopeList, scopes_),
  PROTOBUF_FIELD_OFFSET(::clarifai::auth::scope::ScopeList, endpoints_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::clarifai::auth::scope::ScopeList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::clarifai::auth::scope::_ScopeList_default_instance_),
};

const char descriptor_table_protodef_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%proto/clarifai/auth/scope/scope.proto\022"
  "\023clarifai.auth.scope\032 google/protobuf/de"
  "scriptor.proto\"F\n\tScopeList\022&\n\006scopes\030\001 "
  "\003(\0162\026.clarifai.auth.scope.S\022\021\n\tendpoints"
  "\030\002 \003(\t*\310\016\n\001S\022\t\n\005undef\020\000\022\r\n\003All\020\001\032\004\360\233\'\001\022\021"
  "\n\007Predict\020\002\032\004\360\233\'\001\022\020\n\006Search\020\003\032\004\360\233\'\001\022\030\n\nI"
  "nputs_Add\020\004\032\010\360\233\'\001\370\233\'\005\022\024\n\nInputs_Get\020\005\032\004\360"
  "\233\'\001\022 \n\014Inputs_Patch\020\007\032\016\010\001\360\233\'\001\370\233\'\004\370\233\'\005\022\037\n"
  "\rInputs_Delete\020\010\032\014\360\233\'\001\370\233\'\004\370\233\'\005\022\035\n\rOutput"
  "s_Patch\020\t\032\n\010\001\370\233\'\005\370\233\'\002\022\032\n\014Concepts_Add\020\n\032"
  "\010\360\233\'\001\370\233\'\013\022\026\n\014Concepts_Get\020\013\032\004\360\233\'\001\022\"\n\016Con"
  "cepts_Patch\020\014\032\016\010\001\360\233\'\001\370\233\'\n\370\233\'\013\022\035\n\017Concept"
  "s_Delete\020\r\032\010\370\233\'\n\370\233\'\013\022\030\n\nModels_Add\020\016\032\010\360\233"
  "\'\001\370\233\'\017\022\024\n\nModels_Get\020\017\032\004\360\233\'\001\022$\n\014Models_P"
  "atch\020\020\032\022\010\001\360\233\'\001\370\233\'\016\370\233\'\017\370\233\'\032\022\037\n\rModels_Del"
  "ete\020\021\032\014\360\233\'\001\370\233\'\016\370\233\'\017\022\032\n\014Models_Train\020\032\032\010\360"
  "\233\'\001\370\233\'\017\022\025\n\013Models_Sync\020\033\032\004\370\233\'\017\022\033\n\rWorkfl"
  "ows_Add\020\022\032\010\360\233\'\001\370\233\'\023\022\027\n\rWorkflows_Get\020\023\032\004"
  "\360\233\'\001\022#\n\017Workflows_Patch\020\024\032\016\010\001\360\233\'\001\370\233\'\022\370\233\'"
  "\023\022\"\n\020Workflows_Delete\020\025\032\014\360\233\'\001\370\233\'\022\370\233\'\023\022\035\n"
  "\023WorkflowMetrics_Get\020`\032\004\360\233\'\001\022!\n\023Workflow"
  "Metrics_Add\020a\032\010\360\233\'\001\370\233\'`\022(\n\026WorkflowMetri"
  "cs_Delete\020b\032\014\360\233\'\001\370\233\'a\370\233\'`\022\"\n\026TSNEVisuali"
  "zations_Add\020\030\032\006\010\001\370\233\'\031\022\036\n\026TSNEVisualizati"
  "ons_Get\020\031\032\002\010\001\022\035\n\017Annotations_Add\020%\032\010\360\233\'\001"
  "\370\233\'&\022\031\n\017Annotations_Get\020&\032\004\360\233\'\001\022%\n\021Annot"
  "ations_Patch\020\'\032\016\010\001\360\233\'\001\370\233\'%\370\233\'&\022$\n\022Annota"
  "tions_Delete\020(\032\014\360\233\'\001\370\233\'%\370\233\'&\022\034\n\016Collecto"
  "rs_Add\020)\032\010\360\233\'\001\370\233\'*\022\030\n\016Collectors_Get\020*\032\004"
  "\360\233\'\001\022#\n\021Collectors_Delete\020+\032\014\360\233\'\001\370\233\')\370\233\'"
  "*\022\026\n\010Apps_Add\020,\032\010\360\233\'\001\370\233\'-\022\022\n\010Apps_Get\020-\032"
  "\004\360\233\'\001\022\035\n\013Apps_Delete\020.\032\014\360\233\'\001\370\233\',\370\233\'-\022\026\n\010"
  "Keys_Add\020/\032\010\360\233\'\001\370\233\'0\022\022\n\010Keys_Get\0200\032\004\360\233\'\001"
  "\022\035\n\013Keys_Delete\0201\032\014\360\233\'\001\370\233\'/\370\233\'0\022\037\n\021Colla"
  "borators_Add\0203\032\010\360\233\'\001\370\233\'2\022\033\n\021Collaborator"
  "s_Get\0202\032\004\360\233\'\001\022&\n\024Collaborators_Delete\0204\032"
  "\014\360\233\'\001\370\233\'3\370\233\'2\022\031\n\013Metrics_Add\0206\032\010\360\233\'\001\370\233\'5"
  "\022\025\n\013Metrics_Get\0205\032\004\360\233\'\001\022 \n\016Metrics_Delet"
  "e\020\?\032\014\360\233\'\001\370\233\'6\370\233\'5\022\027\n\tTasks_Add\0207\032\010\360\233\'\001\370\233"
  "\'8\022\023\n\tTasks_Get\0208\032\004\360\233\'\001\022\036\n\014Tasks_Delete\020"
  "F\032\014\360\233\'\001\370\233\'7\370\233\'8\022\"\n\024PasswordPolicies_Add\020"
  "9\032\010\360\233\'\001\370\233\':\022\036\n\024PasswordPolicies_Get\020:\032\004\360"
  "\233\'\001\022)\n\027PasswordPolicies_Delete\020;\032\014\360\233\'\001\370\233"
  "\'9\370\233\':\022\031\n\017LabelOrders_Get\020C\032\004\360\233\'\001\022\035\n\017Lab"
  "elOrders_Add\020D\032\010\360\233\'\001\370\233\'C\022$\n\022LabelOrders_"
  "Delete\020E\032\014\360\233\'\001\370\233\'D\370\233\'C\022 \n\026UserFeatureCon"
  "figs_Get\020G\032\004\360\233\'\001\022.\n FindDuplicateAnnotat"
  "ionsJobs_Add\020f\032\010\360\233\'\001\370\233\'g\022*\n FindDuplicat"
  "eAnnotationsJobs_Get\020g\032\004\360\233\'\001\0225\n#FindDupl"
  "icateAnnotationsJobs_Delete\020h\032\014\360\233\'\001\370\233\'f\370"
  "\233\'g\"\004\010\036\020\036\"\004\010\037\020\037\"\004\010 \020 \"\004\010!\020!\"\004\010\"\020\":<\n\017cla"
  "rfai_exposed\022!.google.protobuf.EnumValue"
  "Options\030\276\363\004 \001(\010:^\n\031clarifai_depending_sc"
  "opes\022!.google.protobuf.EnumValueOptions\030"
  "\277\363\004 \003(\0162\026.clarifai.auth.scope.SBg\n\034com.c"
  "larifai.grpc.auth.scopeP\001Z>github.com/Cl"
  "arifai/clarifai-go-grpc/proto/clarifai/a"
  "uth/scope\242\002\004CAIPb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_sccs[1] = {
  &scc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_once;
static bool descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto = {
  &descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_initialized, descriptor_table_protodef_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto, "proto/clarifai/auth/scope/scope.proto", 2304,
  &descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_once, descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_sccs, descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto::offsets,
  file_level_metadata_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto, 1, file_level_enum_descriptors_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto, file_level_service_descriptors_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto), true);
namespace clarifai {
namespace auth {
namespace scope {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* S_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto);
  return file_level_enum_descriptors_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto[0];
}
bool S_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 24:
    case 25:
    case 26:
    case 27:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 63:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 96:
    case 97:
    case 98:
    case 102:
    case 103:
    case 104:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void ScopeList::InitAsDefaultInstance() {
}
class ScopeList::_Internal {
 public:
};

ScopeList::ScopeList()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:clarifai.auth.scope.ScopeList)
}
ScopeList::ScopeList(const ScopeList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      scopes_(from.scopes_),
      endpoints_(from.endpoints_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:clarifai.auth.scope.ScopeList)
}

void ScopeList::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto.base);
}

ScopeList::~ScopeList() {
  // @@protoc_insertion_point(destructor:clarifai.auth.scope.ScopeList)
  SharedDtor();
}

void ScopeList::SharedDtor() {
}

void ScopeList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ScopeList& ScopeList::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ScopeList_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto.base);
  return *internal_default_instance();
}


void ScopeList::Clear() {
// @@protoc_insertion_point(message_clear_start:clarifai.auth.scope.ScopeList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scopes_.Clear();
  endpoints_.Clear();
  _internal_metadata_.Clear();
}

const char* ScopeList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .clarifai.auth.scope.S scopes = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_scopes(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_add_scopes(static_cast<::clarifai::auth::scope::S>(val));
        } else goto handle_unusual;
        continue;
      // repeated string endpoints = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_endpoints();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "clarifai.auth.scope.ScopeList.endpoints"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* ScopeList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:clarifai.auth.scope.ScopeList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .clarifai.auth.scope.S scopes = 1;
  {
    int byte_size = _scopes_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          1, scopes_, byte_size, target);
    }
  }

  // repeated string endpoints = 2;
  for (int i = 0, n = this->_internal_endpoints_size(); i < n; i++) {
    const auto& s = this->_internal_endpoints(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "clarifai.auth.scope.ScopeList.endpoints");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:clarifai.auth.scope.ScopeList)
  return target;
}

size_t ScopeList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:clarifai.auth.scope.ScopeList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .clarifai.auth.scope.S scopes = 1;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_scopes_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_scopes(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _scopes_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string endpoints = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(endpoints_.size());
  for (int i = 0, n = endpoints_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      endpoints_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ScopeList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:clarifai.auth.scope.ScopeList)
  GOOGLE_DCHECK_NE(&from, this);
  const ScopeList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ScopeList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:clarifai.auth.scope.ScopeList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:clarifai.auth.scope.ScopeList)
    MergeFrom(*source);
  }
}

void ScopeList::MergeFrom(const ScopeList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:clarifai.auth.scope.ScopeList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  scopes_.MergeFrom(from.scopes_);
  endpoints_.MergeFrom(from.endpoints_);
}

void ScopeList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:clarifai.auth.scope.ScopeList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ScopeList::CopyFrom(const ScopeList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:clarifai.auth.scope.ScopeList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScopeList::IsInitialized() const {
  return true;
}

void ScopeList::InternalSwap(ScopeList* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  scopes_.InternalSwap(&other->scopes_);
  endpoints_.InternalSwap(&other->endpoints_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ScopeList::GetMetadata() const {
  return GetMetadataStatic();
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  clarfai_exposed(kClarfaiExposedFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedEnumTypeTraits< ::clarifai::auth::scope::S, ::clarifai::auth::scope::S_IsValid>, 14, false >
  clarifai_depending_scopes(kClarifaiDependingScopesFieldNumber, static_cast< ::clarifai::auth::scope::S >(0));

// @@protoc_insertion_point(namespace_scope)
}  // namespace scope
}  // namespace auth
}  // namespace clarifai
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::clarifai::auth::scope::ScopeList* Arena::CreateMaybeMessage< ::clarifai::auth::scope::ScopeList >(Arena* arena) {
  return Arena::CreateInternal< ::clarifai::auth::scope::ScopeList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clarifai/auth/scope/scope.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto;
namespace clarifai {
namespace auth {
namespace scope {
class ScopeList;
struct ScopeListDefaultTypeInternal;
extern ScopeListDefaultTypeInternal _ScopeList_default_instance_;
}  // namespace scope
}  // namespace auth
}  // namespace clarifai
PROTOBUF_NAMESPACE_OPEN
template<> ::clarifai::auth::scope::ScopeList* Arena::CreateMaybeMessage<::clarifai::auth::scope::ScopeList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace clarifai {
namespace auth {
namespace scope {

enum S : int {
  undef = 0,
  All = 1,
  Predict = 2,
  Inputs_Add = 4,
  Inputs_Get = 5,
  Inputs_Patch PROTOBUF_DEPRECATED_ENUM = 7,
  Inputs_Delete = 8,
  Outputs_Patch PROTOBUF_DEPRECATED_ENUM = 9,
  Concepts_Add = 10,
  Concepts_Get = 11,
  Concepts_Patch PROTOBUF_DEPRECATED_ENUM = 12,
  Concepts_Delete = 13,
  Models_Add = 14,
  Models_Get = 15,
  Models_Patch PROTOBUF_DEPRECATED_ENUM = 16,
  Models_Delete = 17,
  Models_Train = 26,
  Models_Sync = 27,
  Workflows_Add = 18,
  Workflows_Get = 19,
  Workflows_Patch PROTOBUF_DEPRECATED_ENUM = 20,
  Workflows_Delete = 21,
  WorkflowMetrics_Get = 96,
  WorkflowMetrics_Add = 97,
  WorkflowMetrics_Delete = 98,
  TSNEVisualizations_Add PROTOBUF_DEPRECATED_ENUM = 24,
  TSNEVisualizations_Get PROTOBUF_DEPRECATED_ENUM = 25,
  Annotations_Add = 37,
  Annotations_Get = 38,
  Annotations_Patch PROTOBUF_DEPRECATED_ENUM = 39,
  Annotations_Delete = 40,
  Collectors_Add = 41,
  Collectors_Get = 42,
  Collectors_Delete = 43,
  Apps_Add = 44,
  Apps_Get = 45,
  Apps_Delete = 46,
  Keys_Add = 47,
  Keys_Get = 48,
  Keys_Delete = 49,
  Collaborators_Add = 51,
  Collaborators_Get = 50,
  Collaborators_Delete = 52,
  Metrics_Add = 54,
  Metrics_Get = 53,
  Metrics_Delete = 63,
  Tasks_Add = 55,
  Tasks_Get = 56,
  Tasks_Delete = 70,
  PasswordPolicies_Add = 57,
  PasswordPolicies_Get = 58,
  PasswordPolicies_Delete = 59,
  LabelOrders_Get = 67,
  LabelOrders_Add = 68,
  LabelOrders_Delete = 69,
  UserFeatureConfigs_Get = 71,
  FindDuplicateAnnotationsJobs_Add = 102,
  FindDuplicateAnnotationsJobs_Get = 103,
  FindDuplicateAnnotationsJobs_Delete = 104,
  Datasets_Get = 105,
  Datasets_Add = 106,
  Datasets_Delete = 107,
  Search = 3,
  SavedSearch_Get = 114,
  SavedSearch_Add = 115,
  SavedSearch_Delete = 116,
  ModelVersionPublications_Add = 117,
  ModelVersionPublications_Delete = 118,
  WorkflowPublications_Add = 119,
  WorkflowPublications_Delete = 120,
  BulkOperation_Add = 121,
  BulkOperation_Get = 122,
  BulkOperation_Delete = 123,
  HistoricalUsage_Get = 124,
  S_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  S_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool S_IsValid(int value);
constexpr S S_MIN = undef;
constexpr S S_MAX = HistoricalUsage_Get;
constexpr int S_ARRAYSIZE = S_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* S_descriptor();
template<typename T>
inline const std::string& S_Name(T enum_t_value) {
  static_assert(::std::is_same<T, S>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function S_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    S_descriptor(), enum_t_value);
}
inline bool S_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, S* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<S>(
    S_descriptor(), name, value);
}
// ===================================================================

class ScopeList final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:clarifai.auth.scope.ScopeList) */ {
 public:
  inline ScopeList() : ScopeList(nullptr) {}
  ~ScopeList() override;
  explicit constexpr ScopeList(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScopeList(const ScopeList& from);
  ScopeList(ScopeList&& from) noexcept
    : ScopeList() {
    *this = ::std::move(from);
  }

  inline ScopeList& operator=(const ScopeList& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScopeList& operator=(ScopeList&& from) noexcept {
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
  static const ScopeList& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScopeList* internal_default_instance() {
    return reinterpret_cast<const ScopeList*>(
               &_ScopeList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ScopeList& a, ScopeList& b) {
    a.Swap(&b);
  }
  inline void Swap(ScopeList* other) {
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
  void UnsafeArenaSwap(ScopeList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ScopeList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ScopeList>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ScopeList& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ScopeList& from);
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
  void InternalSwap(ScopeList* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "clarifai.auth.scope.ScopeList";
  }
  protected:
  explicit ScopeList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kScopesFieldNumber = 1,
    kEndpointsFieldNumber = 2,
  };
  // repeated .clarifai.auth.scope.S scopes = 1;
  int scopes_size() const;
  private:
  int _internal_scopes_size() const;
  public:
  void clear_scopes();
  private:
  ::clarifai::auth::scope::S _internal_scopes(int index) const;
  void _internal_add_scopes(::clarifai::auth::scope::S value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_scopes();
  public:
  ::clarifai::auth::scope::S scopes(int index) const;
  void set_scopes(int index, ::clarifai::auth::scope::S value);
  void add_scopes(::clarifai::auth::scope::S value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& scopes() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_scopes();

  // repeated string endpoints = 2;
  int endpoints_size() const;
  private:
  int _internal_endpoints_size() const;
  public:
  void clear_endpoints();
  const std::string& endpoints(int index) const;
  std::string* mutable_endpoints(int index);
  void set_endpoints(int index, const std::string& value);
  void set_endpoints(int index, std::string&& value);
  void set_endpoints(int index, const char* value);
  void set_endpoints(int index, const char* value, size_t size);
  std::string* add_endpoints();
  void add_endpoints(const std::string& value);
  void add_endpoints(std::string&& value);
  void add_endpoints(const char* value);
  void add_endpoints(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& endpoints() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_endpoints();
  private:
  const std::string& _internal_endpoints(int index) const;
  std::string* _internal_add_endpoints();
  public:

  // @@protoc_insertion_point(class_scope:clarifai.auth.scope.ScopeList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> scopes_;
  mutable std::atomic<int> _scopes_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> endpoints_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto;
};
// ===================================================================

static const int kClarfaiExposedFieldNumber = 80318;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  clarfai_exposed;
static const int kClarifaiDependingScopesFieldNumber = 80319;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedEnumTypeTraits< ::clarifai::auth::scope::S, ::clarifai::auth::scope::S_IsValid>, 14, true >
  clarifai_depending_scopes;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScopeList

// repeated .clarifai.auth.scope.S scopes = 1;
inline int ScopeList::_internal_scopes_size() const {
  return scopes_.size();
}
inline int ScopeList::scopes_size() const {
  return _internal_scopes_size();
}
inline void ScopeList::clear_scopes() {
  scopes_.Clear();
}
inline ::clarifai::auth::scope::S ScopeList::_internal_scopes(int index) const {
  return static_cast< ::clarifai::auth::scope::S >(scopes_.Get(index));
}
inline ::clarifai::auth::scope::S ScopeList::scopes(int index) const {
  // @@protoc_insertion_point(field_get:clarifai.auth.scope.ScopeList.scopes)
  return _internal_scopes(index);
}
inline void ScopeList::set_scopes(int index, ::clarifai::auth::scope::S value) {
  scopes_.Set(index, value);
  // @@protoc_insertion_point(field_set:clarifai.auth.scope.ScopeList.scopes)
}
inline void ScopeList::_internal_add_scopes(::clarifai::auth::scope::S value) {
  scopes_.Add(value);
}
inline void ScopeList::add_scopes(::clarifai::auth::scope::S value) {
  _internal_add_scopes(value);
  // @@protoc_insertion_point(field_add:clarifai.auth.scope.ScopeList.scopes)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
ScopeList::scopes() const {
  // @@protoc_insertion_point(field_list:clarifai.auth.scope.ScopeList.scopes)
  return scopes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
ScopeList::_internal_mutable_scopes() {
  return &scopes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
ScopeList::mutable_scopes() {
  // @@protoc_insertion_point(field_mutable_list:clarifai.auth.scope.ScopeList.scopes)
  return _internal_mutable_scopes();
}

// repeated string endpoints = 2;
inline int ScopeList::_internal_endpoints_size() const {
  return endpoints_.size();
}
inline int ScopeList::endpoints_size() const {
  return _internal_endpoints_size();
}
inline void ScopeList::clear_endpoints() {
  endpoints_.Clear();
}
inline std::string* ScopeList::add_endpoints() {
  std::string* _s = _internal_add_endpoints();
  // @@protoc_insertion_point(field_add_mutable:clarifai.auth.scope.ScopeList.endpoints)
  return _s;
}
inline const std::string& ScopeList::_internal_endpoints(int index) const {
  return endpoints_.Get(index);
}
inline const std::string& ScopeList::endpoints(int index) const {
  // @@protoc_insertion_point(field_get:clarifai.auth.scope.ScopeList.endpoints)
  return _internal_endpoints(index);
}
inline std::string* ScopeList::mutable_endpoints(int index) {
  // @@protoc_insertion_point(field_mutable:clarifai.auth.scope.ScopeList.endpoints)
  return endpoints_.Mutable(index);
}
inline void ScopeList::set_endpoints(int index, const std::string& value) {
  endpoints_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::set_endpoints(int index, std::string&& value) {
  endpoints_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::set_endpoints(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  endpoints_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::set_endpoints(int index, const char* value, size_t size) {
  endpoints_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:clarifai.auth.scope.ScopeList.endpoints)
}
inline std::string* ScopeList::_internal_add_endpoints() {
  return endpoints_.Add();
}
inline void ScopeList::add_endpoints(const std::string& value) {
  endpoints_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::add_endpoints(std::string&& value) {
  endpoints_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::add_endpoints(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  endpoints_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:clarifai.auth.scope.ScopeList.endpoints)
}
inline void ScopeList::add_endpoints(const char* value, size_t size) {
  endpoints_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:clarifai.auth.scope.ScopeList.endpoints)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ScopeList::endpoints() const {
  // @@protoc_insertion_point(field_list:clarifai.auth.scope.ScopeList.endpoints)
  return endpoints_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ScopeList::mutable_endpoints() {
  // @@protoc_insertion_point(field_mutable_list:clarifai.auth.scope.ScopeList.endpoints)
  return &endpoints_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace scope
}  // namespace auth
}  // namespace clarifai

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::clarifai::auth::scope::S> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::clarifai::auth::scope::S>() {
  return ::clarifai::auth::scope::S_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fclarifai_2fauth_2fscope_2fscope_2eproto

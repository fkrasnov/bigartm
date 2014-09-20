// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcz_canary_service.proto

#ifndef PROTOBUF_rpcz_5fcanary_5fservice_2eproto__INCLUDED
#define PROTOBUF_rpcz_5fcanary_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpcz_5fcanary_5fservice_2eproto();
void protobuf_AssignDesc_rpcz_5fcanary_5fservice_2eproto();
void protobuf_ShutdownFile_rpcz_5fcanary_5fservice_2eproto();

class SearchRequest;
class SearchResponse;

// ===================================================================

class SearchRequest : public ::google::protobuf::Message {
 public:
  SearchRequest();
  virtual ~SearchRequest();

  SearchRequest(const SearchRequest& from);

  inline SearchRequest& operator=(const SearchRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SearchRequest& default_instance();

  void Swap(SearchRequest* other);

  // implements Message ----------------------------------------------

  SearchRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchRequest& from);
  void MergeFrom(const SearchRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string query = 1;
  inline bool has_query() const;
  inline void clear_query();
  static const int kQueryFieldNumber = 1;
  inline const ::std::string& query() const;
  inline void set_query(const ::std::string& value);
  inline void set_query(const char* value);
  inline void set_query(const char* value, size_t size);
  inline ::std::string* mutable_query();
  inline ::std::string* release_query();
  inline void set_allocated_query(::std::string* query);

  // optional int32 page_number = 2 [default = 1];
  inline bool has_page_number() const;
  inline void clear_page_number();
  static const int kPageNumberFieldNumber = 2;
  inline ::google::protobuf::int32 page_number() const;
  inline void set_page_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SearchRequest)
 private:
  inline void set_has_query();
  inline void clear_has_query();
  inline void set_has_page_number();
  inline void clear_has_page_number();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* query_;
  ::google::protobuf::int32 page_number_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rpcz_5fcanary_5fservice_2eproto();
  friend void protobuf_AssignDesc_rpcz_5fcanary_5fservice_2eproto();
  friend void protobuf_ShutdownFile_rpcz_5fcanary_5fservice_2eproto();

  void InitAsDefaultInstance();
  static SearchRequest* default_instance_;
};
// -------------------------------------------------------------------

class SearchResponse : public ::google::protobuf::Message {
 public:
  SearchResponse();
  virtual ~SearchResponse();

  SearchResponse(const SearchResponse& from);

  inline SearchResponse& operator=(const SearchResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SearchResponse& default_instance();

  void Swap(SearchResponse* other);

  // implements Message ----------------------------------------------

  SearchResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchResponse& from);
  void MergeFrom(const SearchResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string results = 1;
  inline int results_size() const;
  inline void clear_results();
  static const int kResultsFieldNumber = 1;
  inline const ::std::string& results(int index) const;
  inline ::std::string* mutable_results(int index);
  inline void set_results(int index, const ::std::string& value);
  inline void set_results(int index, const char* value);
  inline void set_results(int index, const char* value, size_t size);
  inline ::std::string* add_results();
  inline void add_results(const ::std::string& value);
  inline void add_results(const char* value);
  inline void add_results(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& results() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_results();

  // @@protoc_insertion_point(class_scope:SearchResponse)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> results_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_rpcz_5fcanary_5fservice_2eproto();
  friend void protobuf_AssignDesc_rpcz_5fcanary_5fservice_2eproto();
  friend void protobuf_ShutdownFile_rpcz_5fcanary_5fservice_2eproto();

  void InitAsDefaultInstance();
  static SearchResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// SearchRequest

// required string query = 1;
inline bool SearchRequest::has_query() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchRequest::set_has_query() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchRequest::clear_has_query() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchRequest::clear_query() {
  if (query_ != &::google::protobuf::internal::GetEmptyString()) {
    query_->clear();
  }
  clear_has_query();
}
inline const ::std::string& SearchRequest::query() const {
  return *query_;
}
inline void SearchRequest::set_query(const ::std::string& value) {
  set_has_query();
  if (query_ == &::google::protobuf::internal::GetEmptyString()) {
    query_ = new ::std::string;
  }
  query_->assign(value);
}
inline void SearchRequest::set_query(const char* value) {
  set_has_query();
  if (query_ == &::google::protobuf::internal::GetEmptyString()) {
    query_ = new ::std::string;
  }
  query_->assign(value);
}
inline void SearchRequest::set_query(const char* value, size_t size) {
  set_has_query();
  if (query_ == &::google::protobuf::internal::GetEmptyString()) {
    query_ = new ::std::string;
  }
  query_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchRequest::mutable_query() {
  set_has_query();
  if (query_ == &::google::protobuf::internal::GetEmptyString()) {
    query_ = new ::std::string;
  }
  return query_;
}
inline ::std::string* SearchRequest::release_query() {
  clear_has_query();
  if (query_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = query_;
    query_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void SearchRequest::set_allocated_query(::std::string* query) {
  if (query_ != &::google::protobuf::internal::GetEmptyString()) {
    delete query_;
  }
  if (query) {
    set_has_query();
    query_ = query;
  } else {
    clear_has_query();
    query_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional int32 page_number = 2 [default = 1];
inline bool SearchRequest::has_page_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchRequest::set_has_page_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchRequest::clear_has_page_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchRequest::clear_page_number() {
  page_number_ = 1;
  clear_has_page_number();
}
inline ::google::protobuf::int32 SearchRequest::page_number() const {
  return page_number_;
}
inline void SearchRequest::set_page_number(::google::protobuf::int32 value) {
  set_has_page_number();
  page_number_ = value;
}

// -------------------------------------------------------------------

// SearchResponse

// repeated string results = 1;
inline int SearchResponse::results_size() const {
  return results_.size();
}
inline void SearchResponse::clear_results() {
  results_.Clear();
}
inline const ::std::string& SearchResponse::results(int index) const {
  return results_.Get(index);
}
inline ::std::string* SearchResponse::mutable_results(int index) {
  return results_.Mutable(index);
}
inline void SearchResponse::set_results(int index, const ::std::string& value) {
  results_.Mutable(index)->assign(value);
}
inline void SearchResponse::set_results(int index, const char* value) {
  results_.Mutable(index)->assign(value);
}
inline void SearchResponse::set_results(int index, const char* value, size_t size) {
  results_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchResponse::add_results() {
  return results_.Add();
}
inline void SearchResponse::add_results(const ::std::string& value) {
  results_.Add()->assign(value);
}
inline void SearchResponse::add_results(const char* value) {
  results_.Add()->assign(value);
}
inline void SearchResponse::add_results(const char* value, size_t size) {
  results_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SearchResponse::results() const {
  return results_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SearchResponse::mutable_results() {
  return &results_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpcz_5fcanary_5fservice_2eproto__INCLUDED

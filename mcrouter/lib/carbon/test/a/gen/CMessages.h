/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

#include "mcrouter/lib/carbon/test/a/gen/gen-cpp2/C_types.h"

namespace carbon {
namespace test_enum {

using Foo = carbon::test_enum::thrift::Foo;

std::string enumFooToString(Foo val);

class StructWithEnumField {
 public:

  StructWithEnumField() = default;
  StructWithEnumField(const StructWithEnumField&) = default;
  StructWithEnumField& operator=(const StructWithEnumField&) = default;
  StructWithEnumField(StructWithEnumField&&) = default;
  StructWithEnumField& operator=(StructWithEnumField&&) = default;

  FOLLY_ERASE ::apache::thrift::field_ref<const Foo&>
   test_ref() const& {
    return underlyingThriftStruct_.test_ref();
  }
  FOLLY_ERASE ::apache::thrift::field_ref<Foo&>
   test_ref() & {
    return underlyingThriftStruct_.test_ref();
  }
  const Foo& test() const {
    return underlyingThriftStruct_.test;
  }
  Foo& test() {
    return underlyingThriftStruct_.test;
  }
  const carbon::test_enum::thrift::StructWithEnumField& getThriftStruct() const {
    return underlyingThriftStruct_;
  }
  carbon::test_enum::thrift::StructWithEnumField& getThriftStruct() {
    return underlyingThriftStruct_;
  }

  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

  // Methods for Thrift interoperability, note that the methods work with Thrift
  // protocols and not Carbon protocol.
  void __clear() {
    underlyingThriftStruct_.__clear();
  }
  template <class Protocol>
  uint32_t write(Protocol* protocol) const {
    return underlyingThriftStruct_.write(protocol);
  }
  template <class Protocol>
  uint32_t serializedSize(Protocol* protocol) const {
    return underlyingThriftStruct_.serializedSize(protocol);
  }
  template <class Protocol>
  uint32_t serializedSizeZC(Protocol* protocol) const {
    return underlyingThriftStruct_.serializedSizeZC(protocol);
  }
 private:
  template <class Protocol>
  void readNoXfer(Protocol* protocol) {
    underlyingThriftStruct_.read(protocol);
  }

  friend class apache::thrift::Cpp2Ops<StructWithEnumField>;

 private:
  struct __isset {
    bool test;
  } __isset = {};

  carbon::test_enum::thrift::StructWithEnumField underlyingThriftStruct_;
};
} // namespace test_enum
} // namespace carbon

#include "CMessages-inl.h"

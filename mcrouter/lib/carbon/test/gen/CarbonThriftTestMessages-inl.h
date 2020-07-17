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

namespace carbon {
namespace test {
namespace thrift {

template <class Writer>
void DummyThriftRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key_ref());
  writer.writeField(2 /* field id */, testBool_ref());
  writer.writeField(3 /* field id */, testInt8_ref());
  writer.writeField(4 /* field id */, testInt16_ref());
  writer.writeField(5 /* field id */, testInt32_ref());
  writer.writeField(6 /* field id */, testInt64_ref());
  writer.writeField(7 /* field id */, testUInt8_ref());
  writer.writeField(8 /* field id */, testUInt16_ref());
  writer.writeField(9 /* field id */, testUInt32_ref());
  writer.writeField(10 /* field id */, testUInt64_ref());
  writer.writeField(11 /* field id */, testFloat_ref());
  writer.writeField(12 /* field id */, testDouble_ref());
  writer.writeField(13 /* field id */, testShortString_ref());
  writer.writeField(14 /* field id */, testLongString_ref());
  writer.writeField(15 /* field id */, testIobuf_ref());
  writer.writeField(16 /* field id */, testList_ref());
  writer.writeField(17 /* field id */, testOptionalKeywordBool_ref());
  writer.writeField(18 /* field id */, testOptionalKeywordString_ref());
  writer.writeField(19 /* field id */, testOptionalKeywordIobuf_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void DummyThriftRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "testBool", *this->testBool_ref())) {
    return;
  }
  if (!v.visitField(3, "testInt8", *this->testInt8_ref())) {
    return;
  }
  if (!v.visitField(4, "testInt16", *this->testInt16_ref())) {
    return;
  }
  if (!v.visitField(5, "testInt32", *this->testInt32_ref())) {
    return;
  }
  if (!v.visitField(6, "testInt64", *this->testInt64_ref())) {
    return;
  }
  if (!v.visitField(7, "testUInt8", *this->testUInt8_ref())) {
    return;
  }
  if (!v.visitField(8, "testUInt16", *this->testUInt16_ref())) {
    return;
  }
  if (!v.visitField(9, "testUInt32", *this->testUInt32_ref())) {
    return;
  }
  if (!v.visitField(10, "testUInt64", *this->testUInt64_ref())) {
    return;
  }
  if (!v.visitField(11, "testFloat", *this->testFloat_ref())) {
    return;
  }
  if (!v.visitField(12, "testDouble", *this->testDouble_ref())) {
    return;
  }
  if (!v.visitField(13, "testShortString", *this->testShortString_ref())) {
    return;
  }
  if (!v.visitField(14, "testLongString", *this->testLongString_ref())) {
    return;
  }
  if (!v.visitField(15, "testIobuf", *this->testIobuf_ref())) {
    return;
  }
  if (!v.visitField(16, "testList", *this->testList_ref())) {
    return;
  }
  if (!v.visitField(17, "testOptionalKeywordBool", this->testOptionalKeywordBool_ref())) {
    return;
  }
  if (!v.visitField(18, "testOptionalKeywordString", this->testOptionalKeywordString_ref())) {
    return;
  }
  if (!v.visitField(19, "testOptionalKeywordIobuf", this->testOptionalKeywordIobuf_ref())) {
    return;
  }
}

template <class V>
void DummyThriftRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "testBool", *this->testBool_ref())) {
    return;
  }
  if (!v.visitField(3, "testInt8", *this->testInt8_ref())) {
    return;
  }
  if (!v.visitField(4, "testInt16", *this->testInt16_ref())) {
    return;
  }
  if (!v.visitField(5, "testInt32", *this->testInt32_ref())) {
    return;
  }
  if (!v.visitField(6, "testInt64", *this->testInt64_ref())) {
    return;
  }
  if (!v.visitField(7, "testUInt8", *this->testUInt8_ref())) {
    return;
  }
  if (!v.visitField(8, "testUInt16", *this->testUInt16_ref())) {
    return;
  }
  if (!v.visitField(9, "testUInt32", *this->testUInt32_ref())) {
    return;
  }
  if (!v.visitField(10, "testUInt64", *this->testUInt64_ref())) {
    return;
  }
  if (!v.visitField(11, "testFloat", *this->testFloat_ref())) {
    return;
  }
  if (!v.visitField(12, "testDouble", *this->testDouble_ref())) {
    return;
  }
  if (!v.visitField(13, "testShortString", *this->testShortString_ref())) {
    return;
  }
  if (!v.visitField(14, "testLongString", *this->testLongString_ref())) {
    return;
  }
  if (!v.visitField(15, "testIobuf", *this->testIobuf_ref())) {
    return;
  }
  if (!v.visitField(16, "testList", *this->testList_ref())) {
    return;
  }
  if (!v.visitField(17, "testOptionalKeywordBool", this->testOptionalKeywordBool_ref())) {
    return;
  }
  if (!v.visitField(18, "testOptionalKeywordString", this->testOptionalKeywordString_ref())) {
    return;
  }
  if (!v.visitField(19, "testOptionalKeywordIobuf", this->testOptionalKeywordIobuf_ref())) {
    return;
  }
}

template <class Writer>
void DummyThriftReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result_ref());
  writer.writeField(2 /* field id */, message_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void DummyThriftReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}

template <class V>
void DummyThriftReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}
} // namespace thrift
} // namespace test
} // namespace carbon

namespace apache {
namespace thrift {
template <>
class Cpp2Ops<carbon::test::DummyThriftRequest> {
 public:
  typedef carbon::test::DummyThriftRequest Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<carbon::test::DummyThriftReply> {
 public:
  typedef carbon::test::DummyThriftReply Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};
} // namespace thrift
} // namespace apache

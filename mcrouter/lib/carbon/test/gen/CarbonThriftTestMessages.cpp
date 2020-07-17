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
#include "CarbonThriftTestMessages.h"

namespace carbon {
namespace test {

std::string enumMyEnumToString(MyEnum val) {
  switch (val) {
    case MyEnum::A:
      return "A";
    case MyEnum::B:
      return "B";
    case MyEnum::C:
      return "C";
  }
  return "<INVALID_OPTION>";
}

constexpr const char* const ThriftTestRequest::name;

constexpr const char* const DummyThriftRequest::name;

} // namespace test
} // namespace carbon

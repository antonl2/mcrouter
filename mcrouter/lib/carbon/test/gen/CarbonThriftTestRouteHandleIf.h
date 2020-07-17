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

#include <string>
#include <utility>

#include <mcrouter/lib/RouteHandleTraverser.h>

#include "mcrouter/lib/carbon/test/gen/CarbonThriftTestMessages.h"

namespace carbon {
namespace test {

template <class Route>
class CarbonThriftTestRouteHandle;

class CarbonThriftTestRouteHandleIf {
 public:
  template <class Route>
  using Impl = CarbonThriftTestRouteHandle<Route>;

  /**
   * Returns a string identifying this route handle instance
   */
  virtual std::string routeName() const = 0;

  virtual ~CarbonThriftTestRouteHandleIf() = default;

  virtual DummyThriftReply route(const DummyThriftRequest&) = 0;
  virtual ThriftTestReply route(const ThriftTestRequest&) = 0;

virtual bool traverse(
    const DummyThriftRequest&,
    const facebook::memcache::RouteHandleTraverser<CarbonThriftTestRouteHandleIf>&) const = 0;
virtual bool traverse(
    const ThriftTestRequest&,
    const facebook::memcache::RouteHandleTraverser<CarbonThriftTestRouteHandleIf>&) const = 0;
};

template <class Route>
class CarbonThriftTestRouteHandle : public CarbonThriftTestRouteHandleIf {
 public:
  template <class... Args>
  explicit CarbonThriftTestRouteHandle(Args&&... args)
      : route_(std::forward<Args>(args)...) {}
  std::string routeName() const override final {
    return route_.routeName();
  }

  DummyThriftReply route(const DummyThriftRequest& request) override final {
    return route_.route(request);
  }
  ThriftTestReply route(const ThriftTestRequest& request) override final {
    return route_.route(request);
  }

bool traverse(
    const DummyThriftRequest& request,
    const facebook::memcache::RouteHandleTraverser<CarbonThriftTestRouteHandleIf>& traverser)
    const override final {
  return route_.traverse(request, traverser);
}
bool traverse(
    const ThriftTestRequest& request,
    const facebook::memcache::RouteHandleTraverser<CarbonThriftTestRouteHandleIf>& traverser)
    const override final {
  return route_.traverse(request, traverser);
}

 private:
  Route route_;
};
} // namespace test
} // namespace carbon

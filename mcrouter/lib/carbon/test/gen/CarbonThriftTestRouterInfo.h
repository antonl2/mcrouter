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

#include <chrono>
#include <functional>
#include <unordered_map>

#include <folly/Range.h>

#include <mcrouter/lib/carbon/Stats.h>

#include "mcrouter/lib/carbon/test/gen/CarbonThriftTestRouteHandleIf.h"
#include "mcrouter/lib/carbon/test/gen/CarbonThriftTestRouterStats.h"

// Forward declarations
namespace folly {
struct dynamic;
class VirtualEventBase;
} // namespace folly

namespace facebook {
namespace memcache {
template <class RouteHandleIf>
class RouteHandleFactory;
namespace mcrouter {
template <class RouterInfo>
class ExtraRouteHandleProviderIf;
} // namespace mcrouter
} // namespace memcache
} // namespace facebook

namespace carbon {
namespace test {

namespace detail {

using CarbonThriftTestRoutableRequests = carbon::List<
    DummyThriftRequest>;
} // namespace detail

struct CarbonThriftTestRouterInfo {
  using RouteHandleIf = CarbonThriftTestRouteHandleIf;
  using RouteHandlePtr = std::shared_ptr<RouteHandleIf>;

  static constexpr const char* name = "CarbonThriftTest";

  template <class Route>
  using RouteHandle = CarbonThriftTestRouteHandle<Route>;
  using RoutableRequests = detail::CarbonThriftTestRoutableRequests;
  
  using RouterStats = carbon::Stats<CarbonThriftTestRouterStatsConfig>;

  using RouteHandleFactoryMap = std::unordered_map<
      folly::StringPiece,
      std::function<RouteHandlePtr(
          facebook::memcache::RouteHandleFactory<RouteHandleIf>&,
          const folly::dynamic&)>,
      folly::Hash>;

  static RouteHandleFactoryMap buildRouteMap();

  static std::unique_ptr<facebook::memcache::mcrouter::
                             ExtraRouteHandleProviderIf<CarbonThriftTestRouterInfo>>
  buildExtraProvider();
};
} // namespace test
} // namespace carbon

#include "mcrouter/lib/carbon/test/gen/CarbonThriftTestThriftTransport.h"
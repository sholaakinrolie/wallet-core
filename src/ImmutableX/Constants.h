// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "ImmutableX/CurvePoint.h"
#include "uint256.h"

namespace TW::ImmutableX {

namespace internal {
inline constexpr const char* gLayer = "starkex";
inline constexpr const char* gApplication = "immutablex";
inline constexpr const char* gIndex = "1";
inline const int256_t gStarkCurveA(1);
inline const int256_t gStarkCurveB("3141592653589793238462643383279502884197169399375105820974944592307816406665");
inline const int256_t gStarkCurveN("3618502788666131213697322783095070105526743751716087489154079457884512865583");
inline const int256_t gStarkCurveP("3618502788666131213697322783095070105623107215331596699973092056135872020481");
inline const int256_t gStarkDeriveBias("112173586448650067624617006275947173271329056303198712163776463194419898833073");
inline const CurvePoint gStarkCurveG{.x = int256_t("874739451078007766457464989774322083649278607533249481151382481072868806602"),
                                     .y = int256_t("152666792071518830868575557812948353041420400780739481342941381225525861407")};
} // namespace internal

} // namespace TW::ImmutableX

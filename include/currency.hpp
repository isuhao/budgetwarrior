//=======================================================================
// Copyright (c) 2013-2018 Baptiste Wicht.
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#pragma once

#include <string>

namespace budget {

double exchange_rate(const std::string& from);
double exchange_rate(const std::string& from, const std::string& to);

void invalidate_currency_cache();

} //end of namespace budget

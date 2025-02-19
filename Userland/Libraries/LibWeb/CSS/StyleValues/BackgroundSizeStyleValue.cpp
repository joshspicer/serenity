/*
 * Copyright (c) 2018-2020, Andreas Kling <kling@serenityos.org>
 * Copyright (c) 2021, Tobias Christiansen <tobyase@serenityos.org>
 * Copyright (c) 2021-2023, Sam Atkins <atkinssj@serenityos.org>
 * Copyright (c) 2022-2023, MacDue <macdue@dueutil.tech>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "BackgroundSizeStyleValue.h"

namespace Web::CSS {
BackgroundSizeStyleValue::BackgroundSizeStyleValue(LengthPercentage size_x, LengthPercentage size_y)
    : StyleValueWithDefaultOperators(Type::BackgroundSize)
    , m_properties { .size_x = size_x, .size_y = size_y }
{
}

BackgroundSizeStyleValue::~BackgroundSizeStyleValue() = default;

ErrorOr<String> BackgroundSizeStyleValue::to_string() const
{
    return String::formatted("{} {}", TRY(m_properties.size_x.to_string()), TRY(m_properties.size_y.to_string()));
}

}

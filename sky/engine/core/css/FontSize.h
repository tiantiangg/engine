/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef SKY_ENGINE_CORE_CSS_FONTSIZE_H_
#define SKY_ENGINE_CORE_CSS_FONTSIZE_H_

#include "gen/sky/core/CSSValueKeywords.h"
#include "sky/engine/platform/fonts/FixedPitchFontType.h"

namespace blink {

class Document;

enum ESmartMinimumForFontSize { DoNotUseSmartMinimumForFontSize, UseSmartMinimumForFontFize };

class FontSize {
private:
    FontSize()
    {
    }

public:
    static float getComputedSizeFromSpecifiedSize(bool isAbsoluteSize, float specifiedSize, ESmartMinimumForFontSize = UseSmartMinimumForFontFize);

    // Given a CSS keyword in the range (xx-small to -webkit-xxx-large), this function will return
    // the correct font size scaled relative to the user's default (medium).
    static float fontSizeForKeyword(CSSValueID keyword, FixedPitchFontType);
};

} // namespace blink

#endif  // SKY_ENGINE_CORE_CSS_FONTSIZE_H_

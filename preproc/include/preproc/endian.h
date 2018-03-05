/**
 * @cond ___LICENSE___
 *
 * Copyright (c) 2016-2018 Zefiros Software.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @endcond
 */
#pragma once
#ifndef __ENDIAN_H__
#define __ENDIAN_H__

#include <boost/predef/other.h>

#if defined(BOOST_ENDIAN_BIG_BYTE)
#   define IS_BIG_ENDIAN_BYTE BOOST_ENDIAN_BIG_BYTE
#endif

#if defined(BOOST_ENDIAN_BIG_WORD)
#   define IS_BIG_ENDIAN_WORD BOOST_ENDIAN_BIG_WORD
#endif

#if defined(BOOST_ENDIAN_LITTLE_BYTE)
#   define IS_LITTLE_ENDIAN_BYTE BOOST_ENDIAN_LITTLE_BYTE
#endif

#if defined(BOOST_ENDIAN_LITTLE_WORD)
#   define IS_LITTLE_ENDIAN_WORD BOOST_ENDIAN_LITTLE_WORD
#endif

namespace Endian
{
    constexpr bool IsBigByte()
    {
        return IS_BIG_ENDIAN_BYTE;
    }

    constexpr bool IsBigWord()
    {
        return IS_BIG_ENDIAN_WORD;
    }

    constexpr bool IsLittleByte()
    {
        return IS_LITTLE_ENDIAN_BYTE;
    }

    constexpr bool IsLittleWord()
    {
        return IS_LITTLE_ENDIAN_WORD;
    }
}

#endif
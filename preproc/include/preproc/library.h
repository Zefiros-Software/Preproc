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
#ifndef __LIBRARY_H__
#define __LIBRARY_H__

#include "preproc/version.h"

#include <boost/predef/library.h>

#if defined(BOOST_LIB_C_GNU_AVAILABLE)
#   define IS_C_GNU BOOST_LIB_C_GNU_AVAILABLE
#endif

#if defined(BOOST_LIB_C_GNU)
#   define C_GNU_VERSION BOOST_LIB_C_GNU
#endif

#if defined(BOOST_LIB_STD_CXX_AVAILABLE)
#   define IS_CXX BOOST_LIB_STD_CXX_AVAILABLE
#endif

#if defined(BOOST_LIB_STD_CXX)
#   define CXX_VERSION BOOST_LIB_STD_CXX
#endif

#if defined(BOOST_LIB_STD_DINKUMWARE_AVAILABLE)
#   define IS_DINKUMWARE BOOST_LIB_STD_DINKUMWARE_AVAILABLE
#endif

#if defined(BOOST_LIB_STD_DINKUMWARE)
#   define DINKUMWARE_VERSION BOOST_LIB_STD_DINKUMWARE
#endif

#if defined(BOOST_LIB_STD_GNU_AVAILABLE)
#   define IS_GNU BOOST_LIB_STD_GNU_AVAILABLE
#endif

#if defined(BOOST_LIB_STD_GNU)
#   define GNU_VERSION BOOST_LIB_STD_GNU
#endif

namespace Library
{
    constexpr bool IsCGNU()
    {
#if defined(IS_C_GNU)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CGNUVersion()
    {
        return Version::PredefToTuple(C_GNU_VERSION);
    }

    constexpr bool IsCxx()
    {
#if defined(IS_CXX)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CxxVersion()
    {
        return Version::PredefToTuple(CXX_VERSION);
    }

    constexpr bool IsDinkumware()
    {
#if defined(IS_DINKUMWARE)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version DinkumwareVersion()
    {
        return Version::PredefToTuple(DINKUMWARE_VERSION);
    }

    constexpr bool IsGNU()
    {
#if defined(IS_GNU)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version GNUVersion()
    {
        return Version::PredefToTuple(GNU_VERSION);
    }
}

#endif
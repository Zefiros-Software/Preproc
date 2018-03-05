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
#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

#include "preproc/version.h"

#include <boost/predef/language.h>

#if defined(BOOST_LANG_OBJC)
#   define OBJC_VERSION BOOST_LANG_OBJC
#endif

#if defined(BOOST_LANG_OBJC_AVAILABLE)
#   define HAS_OBJC BOOST_LANG_OBJC_AVAILABLE
#endif

#if defined(BOOST_LANG_STDC)
#   define C_VERSION BOOST_LANG_STDC
#endif

#if defined(BOOST_LANG_STDC_AVAILABLE)
#   define HAS_C BOOST_LANG_STDC_AVAILABLE
#endif

#if defined(BOOST_LANG_STDCPP)
#   define CPP_VERSION BOOST_LANG_STDCPP
#endif

#if defined(BOOST_LANG_STDCPP_AVAILABLE)
#   define HAS_CPP BOOST_LANG_STDCPP_AVAILABLE
#endif

#if defined(BOOST_LANG_STDCPPCLI)
#   define CPPCLI_VERSION BOOST_LANG_STDCPPCLI
#endif

#if defined(BOOST_LANG_STDCPPCLI_AVAILABLE)
#   define HAS_CPPCLI BOOST_LANG_STDCPPCLI_AVAILABLE
#endif

#if defined(BOOST_LANG_STDECPP)
#   define ECPP_VERSION BOOST_LANG_STDECPP
#endif

#if defined(BOOST_LANG_STDECPP_AVAILABLE)
#   define HAS_ECPP BOOST_LANG_STDECPP_AVAILABLE
#endif

namespace Language
{
    constexpr bool HasObjectiveC()
    {
#if defined(HAS_OBJC)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version ObjectiveCVersion()
    {
        return Version::PredefToTuple(OBJC_VERSION);
    }

    constexpr bool HasC()
    {
#if defined(HAS_C)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CVersion()
    {
        return Version::PredefToTuple(C_VERSION);
    }

    constexpr bool HasCpp()
    {
#if defined(HAS_CPP)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CppVersion()
    {
        return Version::PredefToTuple(CPP_VERSION);
    }

    constexpr bool HasCppCLI()
    {
#if defined(HAS_CPPCLI)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CppCLIVersion()
    {
        return Version::PredefToTuple(CPPCLI_VERSION);
    }

    constexpr bool HasECpp()
    {
#if defined(HAS_ECPP)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version ECppVersion()
    {
        return Version::PredefToTuple(ECPP_VERSION);
    }

}

#endif
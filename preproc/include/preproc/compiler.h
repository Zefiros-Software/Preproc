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
#ifndef __COMPILER_H__
#define __COMPILER_H__

#include "preproc/version.h"

#include <boost/predef/compiler.h>

#if defined(BOOST_COMP_BORLAND)
#   define BORLAND_VERSION BOOST_COMP_BORLAND
#endif

#if defined(BOOST_COMP_BORLAND_AVAILABLE)
#   define IS_BORLAND BOOST_COMP_BORLAND_AVAILABLE
#endif

#if defined(BOOST_COMP_CLANG)
#   define CLANG_VERSION BOOST_COMP_CLANG
#endif

#if defined(BOOST_COMP_CLANG_AVAILABLE)
#   define IS_CLANG BOOST_COMP_CLANG_AVAILABLE
#endif

#if defined(BOOST_COMP_GNUC)
#   define GCC_VERSION BOOST_COMP_GNUC
#endif

#if defined(BOOST_COMP_GNUC_AVAILABLE)
#   define IS_GCC BOOST_COMP_GNUC_AVAILABLE
#endif

#if defined(BOOST_COMP_INTEL)
#   define INTEL_VERSION BOOST_COMP_INTEL
#endif

#if defined(BOOST_COMP_INTEL_AVAILABLE)
#   define IS_INTEL BOOST_COMP_INTEL_AVAILABLE
#endif

#if defined(BOOST_COMP_LLVM)
#   define LLVM_VERSION BOOST_COMP_LLVM
#endif

#if defined(BOOST_COMP_LLVM_AVAILABLE)
#   define IS_LLVM BOOST_COMP_LLVM_AVAILABLE
#endif

#if defined(BOOST_COMP_MSVC)
#   define MSVC_VERSION BOOST_COMP_MSVC
#endif

#if defined(BOOST_COMP_MSVC_AVAILABLE)
#   define IS_MSVC BOOST_COMP_MSVC_AVAILABLE
#endif

namespace Compiler
{
    constexpr bool IsBorland()
    {
#if defined(IS_BORLAND)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> BorlandVersion()
    {
        return Version::PredefToTuple(BORLAND_VERSION);
    }

    constexpr bool IsClang()
    {
#if defined(IS_CLANG)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> ClangVersion()
    {
        return Version::PredefToTuple(CLANG_VERSION);
    }

    constexpr bool IsGCC()
    {
#if defined(IS_GCC)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> GCCVersion()
    {
        return Version::PredefToTuple(GCC_VERSION);
    }

    constexpr bool IsIntel()
    {
#if defined(IS_INTEL)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> IntelVersion()
    {
        return Version::PredefToTuple(INTEL_VERSION);
    }

    constexpr bool IsLLVM()
    {
#if defined(IS_LLVM)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> LLVMVersion()
    {
        return Version::PredefToTuple(LLVM_VERSION);
    }

    constexpr bool IsMSVC()
    {
#if defined(IS_MSVC)
        return true;
#else
        return false;
#endif
    }

    constexpr std::tuple<uint32_t, uint32_t, uint32_t> MSVCVersion()
    {
        return Version::PredefToTuple(MSVC_VERSION);
    }
}

#endif
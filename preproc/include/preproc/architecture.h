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
#ifndef __ARCHITECTURE_H__
#define __ARCHITECTURE_H__

#include <boost/predef/architecture/x86/64.h>

#if defined(BOOST_ARCH_ARM)
#    define IS_ARM BOOST_ARCH_ARM
#endif

#if defined(BOOST_ARCH_IA64)
#    define IS_IA64 BOOST_ARCH_IA64
#endif

#if defined(BOOST_ARCH_PPC)
#    define IS_PPC BOOST_ARCH_PPC
#endif

#if defined(BOOST_ARCH_X86)
#    define IS_X86 BOOST_ARCH_X86
#endif

#if defined(BOOST_ARCH_X86_32)
#    define IS_X86_32 BOOST_ARCH_X86_32
#endif

#if defined(BOOST_ARCH_X86_64)
#    define IS_X86_64 BOOST_ARCH_X86_64
#endif

namespace Architecture
{
    constexpr bool IsARM()
    {
#if IS_ARM
        return true;
#else
        return false;
#endif
    }

    constexpr bool IsIA64()
    {
#if IS_IA64
        return true;
#else
        return false;
#endif
    }

    constexpr bool IsPPC()
    {
#if IS_PPC
        return true;
#else
        return false;
#endif
    }

    constexpr bool IsX86()
    {
#if IS_X86
        return true;
#else
        return false;
#endif
    }

    constexpr bool IsX86_32()
    {
#if IS_X86_32
        return true;
#else
        return false;
#endif
    }

    constexpr bool IsX86_64()
    {
#if IS_X86_64
        return true;
#else
        return false;
#endif
    }
}

#endif
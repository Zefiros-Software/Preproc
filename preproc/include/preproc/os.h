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
#ifndef __OS_H__
#define __OS_H__

#include "preproc/version.h"

#include <boost/predef/os.h>

#if defined(BOOST_OS_WINDOWS)
#   define WINDOWS_VERSION BOOST_OS_WINDOWS
#endif

#if defined(BOOST_OS_WINDOWS_AVAILABLE)
#   define IS_WINDOWS BOOST_OS_WINDOWS_AVAILABLE
#endif


#if defined(BOOST_OS_ANDROID)
#   define ANDROID_VERSION BOOST_OS_ANDROID
#endif

#if defined(BOOST_OS_ANDROID_AVAILABLE)
#   define IS_ANDROID BOOST_OS_ANDROID_AVAILABLE
#endif


#if defined(BOOST_OS_BSD)
#   define BSD_VERSION BOOST_OS_BSD
#endif

#if defined(BOOST_OS_BSD_AVAILABLE)
#   define IS_BSD BOOST_OS_BSD_AVAILABLE
#endif

#if defined(BOOST_OS_BSD_DRAGONFLY)
#   define DRAGONFLY_BSD_VERSION BOOST_OS_BSD_DRAGONFLY
#endif

#if defined(BOOST_OS_BSD_DRAGONFLY_AVAILABLE)
#   define IS_DRAGONFLY_BSD BOOST_OS_BSD_DRAGONFLY_AVAILABLE
#endif

#if defined(BOOST_OS_BSD_FREE)
#   define FREE_BSD_VERSION BOOST_OS_BSD_FREE
#endif

#if defined(BOOST_OS_BSD_FREE_AVAILABLE)
#   define IS_FREE_BSD BOOST_OS_BSD_FREE_AVAILABLE
#endif

#if defined(BOOST_OS_BSD_NET)
#   define NET_BSD_VERSION BOOST_OS_BSD_NET
#endif

#if defined(BOOST_OS_BSD_NET_AVAILABLE)
#   define IS_NET_BSD BOOST_OS_BSD_NET_AVAILABLE
#endif

#if defined(BOOST_OS_BSD_OPEN)
#   define OPEN_BSD_VERSION BOOST_OS_BSD_OPEN
#endif

#if defined(BOOST_OS_BSD_OPEN_AVAILABLE)
#   define IS_OPEN_BSD BOOST_OS_BSD_OPEN_AVAILABLE
#endif


#if defined(BOOST_OS_CYGWIN)
#   define CYGWIN_VERSION BOOST_OS_CYGWIN
#endif

#if defined(BOOST_OS_CYGWIN_AVAILABLE)
#   define IS_CYGWIN BOOST_OS_CYGWIN_AVAILABLE
#endif

#if defined(BOOST_OS_IOS)
#   define IOS_VERSION BOOST_OS_IOS
#endif

#if defined(BOOST_OS_IOS_AVAILABLE)
#   define IS_IOS BOOST_OS_IOS_AVAILABLE
#endif

#if defined(BOOST_OS_LINUX)
#   define LINUX_VERSION BOOST_OS_LINUX
#endif

#if defined(BOOST_OS_LINUX_AVAILABLE)
#   define IS_LINUX BOOST_OS_LINUX_AVAILABLE
#endif

#if defined(BOOST_OS_UNIX)
#   define UNIX_VERSION BOOST_OS_UNIX
#endif

#if defined(BOOST_OS_UNIX_AVAILABLE)
#   define IS_UNIX BOOST_OS_UNIX_AVAILABLE
#endif

#if defined(BOOST_OS_MACOS)
#   define MACOS_VERSION BOOST_OS_MACOS
#endif

#if defined(BOOST_OS_MACOS_AVAILABLE)
#   define IS_MACOS BOOST_OS_MACOS_AVAILABLE
#endif

namespace OS
{
    constexpr bool IsWindows()
    {
#if defined(IS_WINDOWS)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version WindowsVersion()
    {
        return Version::PredefToTuple(WINDOWS_VERSION);
    }

    constexpr bool IsAndroid()
    {
#if defined(IS_ANDROID)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version AndroidVersion()
    {
        return Version::PredefToTuple(ANDROID_VERSION);
    }

    constexpr bool IsBSD()
    {
#if defined(IS_BSD)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version BSDVersion()
    {
        return Version::PredefToTuple(BSD_VERSION);
    }

    constexpr bool IsDragonFlyBSD()
    {
#if defined(IS_DRAGONFLY_BSD)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version DragonFlyBSDVersion()
    {
        return Version::PredefToTuple(DRAGONFLY_BSD_VERSION);
    }

    constexpr bool IsFreeBSD()
    {
#if defined(IS_FREE_BSD)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version FreeBSDVersion()
    {
        return Version::PredefToTuple(FREE_BSD_VERSION);
    }

    constexpr bool IsNetBSD()
    {
#if defined(IS_NET_BSD)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version NetBSDVersion()
    {
        return Version::PredefToTuple(NET_BSD_VERSION);
    }

    constexpr bool IsOpenBSD()
    {
#if defined(IS_OPEN_BSD)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version OpenBSDVersion()
    {
        return Version::PredefToTuple(OPEN_BSD_VERSION);
    }

    constexpr bool IsCygwin()
    {
#if defined(IS_CYGWIN)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version CygwinVersion()
    {
        return Version::PredefToTuple(CYGWIN_VERSION);
    }

    constexpr bool IsIOS()
    {
#if defined(IS_IOS)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version IOSVersion()
    {
        return Version::PredefToTuple(CYGWIN_VERSION);
    }

    constexpr bool IsLinux()
    {
#if defined(IS_LINUX)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version LinuxVersion()
    {
        return Version::PredefToTuple(LINUX_VERSION);
    }

    constexpr bool IsUnix()
    {
#if defined(IS_UNIX)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version UnixVersion()
    {
        return Version::PredefToTuple(UNIX_VERSION);
    }

    constexpr bool IsMacOS()
    {
#if defined(IS_MACOS)
        return true;
#else
        return false;
#endif
    }

    constexpr Version::Version MacOSVersion()
    {
        return Version::PredefToTuple(MACOS_VERSION);
    }
}

#endif
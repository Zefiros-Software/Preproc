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


#include "preproc/version.h"

#include "gtest/gtest.h"


TEST(Version, PredefToTuple1)
{
    uint32_t n = BOOST_VERSION_NUMBER(1, 0, 0);
    ASSERT_EQ(Version::Version(1, 0, 0), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple2)
{
    uint32_t n = BOOST_VERSION_NUMBER(0, 1, 0);
    ASSERT_EQ(Version::Version(0, 1, 0), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple3)
{
    uint32_t n = BOOST_VERSION_NUMBER(0, 0, 1);
    ASSERT_EQ(Version::Version(0, 0, 1), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple4)
{
    uint32_t n = BOOST_VERSION_NUMBER(0, 0, 0);
    ASSERT_EQ(Version::Version(0, 0, 0), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple5)
{
    uint32_t n = BOOST_VERSION_NUMBER(99, 0, 0);
    ASSERT_EQ(Version::Version(99, 0, 0), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple6)
{
    uint32_t n = BOOST_VERSION_NUMBER(0, 99, 0);
    ASSERT_EQ(Version::Version(0, 99, 0), Version::PredefToTuple(n));
}

TEST(Version, PredefToTuple7)
{
    uint32_t n = BOOST_VERSION_NUMBER(0, 0, 99999);
    ASSERT_EQ(Version::Version(0, 0, 99999), Version::PredefToTuple(n));
}
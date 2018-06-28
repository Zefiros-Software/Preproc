#pragma once

#if defined(DEBUG)
#   define IS_DEBUG DEBUG
#endif

#if defined(NDEBUG)
#   define IS_NOT_DEBUG NDEBUG
#endif

namespace Debug
{
    constexpr bool On()
    {
#if defined(IS_DEBUG)
        return true;
#else
        return false;
#endif
    }

    constexpr bool Off()
    {
#if defined(IS_NOT_DEBUG)
        return true;
#else
        return false;
#endif
    }
}
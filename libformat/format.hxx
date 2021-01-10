#pragma once

#include <string>
#include <string_view>
#include <fmt/core.h>
#include <libformat/export.hxx>

namespace std
{
    template <class... Args>
    string format(string_view fmt, const Args &... args)
    {
        return fmt::format(fmt, args...);
    }
} // namespace std

#pragma once

namespace netlib::log
{
    enum class log_level : uint8_t
    {
        error = 0,
        warning = 1, // Consider adding a warning level if applicable
        info = 2,
        debug = 4,
        all = 255,
    };

    inline std::string_view to_string(log_level level)
    {
        switch (level)
        {
        case log_level::error: return "error";
        case log_level::warning: return "warning"; // Handle the new warning level
        case log_level::info: return "info";
        case log_level::debug: return "debug";
        case log_level::all: return "all";
        default: return "unknown";
        }
    }

    // Example of a function to parse log levels from strings
    // This could be expanded to be more robust and handle errors.
    inline log_level from_string(std::string_view str)
    {
        if (str == "error") return log_level::error;
        if (str == "warning") return log_level::warning; // Handle the new warning level
        if (str == "info") return log_level::info;
        if (str == "debug") return log_level::debug;
        if (str == "all") return log_level::all;
        return log_level::error; // Default or error handling
    }
}
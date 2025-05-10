#pragma once
#include <string>

namespace Config {
    const std::string PROGRAM_NAME = "Human Decision-Making Mechanisms";
    const std::string AUTHOR = "Adrian Lesniak";
    const std::string VERSION = "2.0";
    const std::string LOG_FILE = "program.log";
    const std::string DATA_FILE = "user_data.dat";
    
    struct Colors {
        static const int DEFAULT = 7;    // White
        static const int HIGHLIGHT = 11; // Light Cyan
        static const int TITLE = 14;     // Yellow
        static const int ERROR = 12;     // Light Red
        static const int SUCCESS = 10;   // Light Green
    };
}

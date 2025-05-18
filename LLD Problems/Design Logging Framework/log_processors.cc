#include "log_processors.h"

#include <iostream>

void InfoLogProcessor::log(int level, const std::string& message) {
    if (level == INFO) {
        std::cout << "INFO: " << message << std::endl;
    } else {
        LogProcessor::log(level, message);
    }
}

void DebugLogProcessor::log(int level, const std::string& message) {
    if (level == DEBUG) {
        std::cout << "DEBUG: " << message << std::endl;
    } else {
        LogProcessor::log(level, message);
    }
}

void ErrorLogProcessor::log(int level, const std::string& message) {
    if (level == ERROR) {
        std::cout << "ERROR: " << message << std::endl;
    } else {
        LogProcessor::log(level, message);
    }
}
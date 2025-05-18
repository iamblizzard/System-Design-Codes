#include "log_processor.h"

void LogProcessor::log(int level, const std::string& message) {
    if (next_log_processor) {
        next_log_processor->log(level, message);
    }
}
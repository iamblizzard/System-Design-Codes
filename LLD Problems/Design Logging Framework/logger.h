#ifndef LOGGER_H
#define LOGGER_H

#include "log_processor.h"
#include "log_processors.h"

class Logger {
private:
    LogProcessor* log_processor;

public:
    Logger() {
        // Create the chain of responsibility
        log_processor = new InfoLogProcessor(
            new DebugLogProcessor(
                new ErrorLogProcessor(/*next=*/nullptr)
            )
        );
    }

    void log(int level, const std::string& message) {
        log_processor->log(level, message);
    }
};

#endif // LOGGER_H
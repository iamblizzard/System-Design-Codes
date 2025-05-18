#ifndef LOG_PROCESSORS_H
#define LOG_PROCESSORS_H

#include "log_processor.h"

class InfoLogProcessor : public LogProcessor {
public:
    InfoLogProcessor(LogProcessor* next) : LogProcessor(next) {}

    void log(int level, const std::string& message) override;
};

class DebugLogProcessor : public LogProcessor {
public:
    DebugLogProcessor(LogProcessor* next) : LogProcessor(next) {}

    void log(int level, const std::string& message) override;
};


class ErrorLogProcessor : public LogProcessor {
public:
    ErrorLogProcessor(LogProcessor* next) : LogProcessor(next) {}

    void log(int level, const std::string& message) override;
};

#endif // LOG_PROCESSORS_H
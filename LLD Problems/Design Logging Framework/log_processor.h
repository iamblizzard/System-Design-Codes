#ifndef LOG_PROCESSOR_H
#define LOG_PROCESSOR_H

#include <iostream>
#include <string>

class LogProcessor {
private:
    LogProcessor* next_log_processor;

public:
    const static int INFO = 1;
    const static int ERROR = 2;
    const static int DEBUG = 3;

    LogProcessor(LogProcessor* next) : next_log_processor(next) {}

    virtual void log(int level, const std::string& message);
};

#endif // LOG_PROCESSOR_H
#include "logger.h"
#include "log_processor.h"

int main() {
    Logger* logger = new Logger();

    logger->log(LogProcessor::INFO, "Application started");
    logger->log(LogProcessor::ERROR, "An error occurred");
    logger->log(LogProcessor::DEBUG, "Debugging information");
}
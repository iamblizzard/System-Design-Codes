#include "support_handler.h"

#include <iostream>

Priority Request::getPriority() {
    return priority_;
}

void BasicSupportHandler::setNext(SupportHandler* next) {
    next_ = next;
}
void BasicSupportHandler::handleRequest(Request request) {
    if (request.getPriority() == BASIC) {
        std::cout << "Basic support handler processing request." << std::endl;
    } else if (next_) {
        next_->handleRequest(request);
    }
}

void IntermediateSupportHandler::setNext(SupportHandler* next) {
    next_ = next;
}
void IntermediateSupportHandler::handleRequest(Request request) {
    if (request.getPriority() == INTERMEDIATE) {
        std::cout << "Intermediate support handler processing request." << std::endl;
    } else if (next_) {
        next_->handleRequest(request);
    }
}

void CriticalSupportHandler::setNext(SupportHandler* next) {
    next_ = next;
}
void CriticalSupportHandler::handleRequest(Request request) {
    if (request.getPriority() == CRITICAL) {
        std::cout << "Critical support handler processing request." << std::endl;
    } else if (next_) {
        next_->handleRequest(request);
    }
}


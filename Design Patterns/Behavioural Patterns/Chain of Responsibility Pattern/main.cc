#include "support_handler.h"

#include <iostream>

SupportHandler* setupSupportHander() {
    // Create the support handlers
    BasicSupportHandler* basicHandler = new BasicSupportHandler();
    IntermediateSupportHandler* intermediateHandler = new IntermediateSupportHandler();
    CriticalSupportHandler* criticalHandler = new CriticalSupportHandler();

    // Set up the chain of responsibility
    basicHandler->setNext(intermediateHandler);
    intermediateHandler->setNext(criticalHandler);

    return basicHandler;
}

int main () {
    // Setup the support handlers
    SupportHandler* handler = setupSupportHander();

    // Process the requests
    handler->handleRequest(Request(BASIC));
    handler->handleRequest(Request(INTERMEDIATE));
    handler->handleRequest(Request(CRITICAL));
    handler->handleRequest(Request(INTERMEDIATE));
}
#include "us-adapter.h"

#include <iostream>

void UsAdapter::chargeDevice(UsSocket socket) {
    std::cout << "Charging US device in US socket" << std::endl;
}

void UsAdapter::chargeDevice(EuSocket socket) {
    std::cout << "Charging US device in EU socket" << std::endl;
}
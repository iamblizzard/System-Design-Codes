#include "commercial-airplane.h"

#include <iostream>
#include <string>

void CommercialAirplane::requestLanding() {
    airTrafficControlTower->requestLanding(this);
}

void CommercialAirplane::requestTakeoff() {
    airTrafficControlTower->requestTakeoff(this);
}

void CommercialAirplane::notifyAirTrafficControl(std::string message) {
    // Logic for notifying air traffic control
    std::cout << "Commercial airplane: " << message << std::endl;
}
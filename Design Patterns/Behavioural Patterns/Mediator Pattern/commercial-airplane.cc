#include "commercial-airplane.h"

#include <iostream>
#include <string>

void CommercialAirplane::requestLanding() {
    air_traffic_control_tower_->requestLanding(this);
}

void CommercialAirplane::requestTakeoff() {
    air_traffic_control_tower_->requestTakeoff(this);
}

void CommercialAirplane::notifyAirTrafficControl(std::string message) {
    // Logic for notifying air traffic control
    std::cout << "Commercial airplane: " << message << std::endl;
}
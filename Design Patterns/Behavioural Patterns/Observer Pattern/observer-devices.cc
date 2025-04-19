#include "observer-devices.h"

void PhoneDisplay::update(std::string weather) {
    std::cout << "Phone display updated with weather: " << weather << std::endl;
}

void TvDisplay::update(std::string weather) {
    std::cout << "TV display updated with weather: " << weather << std::endl;
}
#include "device.h"

#include <iostream>

void TV::turnOn() {
    std::cout << "TV is turned on." << std::endl;
}
void TV::turnOff() {
    std::cout << "TV is turned off." << std::endl;
}
void TV::changeChannel() {
    std::cout << "TV channel changed." << std::endl;
}

void Radio::turnOn() {
    std::cout << "Radio is turned on." << std::endl;
}
void Radio::turnOff() {
    std::cout << "Radio is turned off." << std::endl;
}
void Radio::adjustVolume() {
    std::cout << "Radio volume adjusted." << std::endl;
}
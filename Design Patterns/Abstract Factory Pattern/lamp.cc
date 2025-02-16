#include "lamp.h"

#include <iostream>

void ModernLamp::switchOn() const {
    std::cout << "Switching on a modern lamp" << std::endl;
}

void VictorianLamp::switchOn() const {
    std::cout << "Switching on a Victorian lamp" << std::endl;
}
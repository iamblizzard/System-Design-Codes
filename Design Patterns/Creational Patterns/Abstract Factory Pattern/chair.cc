#include "chair.h"

#include <iostream>

void ModernChair::sitOn() const {
    std::cout << "Sitting on a modern chair" << std::endl;
}

void VictorianChair::sitOn() const {
    std::cout << "Sitting on a Victorian chair" << std::endl;
}
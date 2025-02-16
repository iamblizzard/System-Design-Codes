#include "sofa.h"

#include <iostream>

void ModernSofa::sitOn() const {
    std::cout << "Sitting on a modern sofa" << std::endl;
}

void VictorianSofa::sitOn() const {
    std::cout << "Sitting on a Victorian sofa" << std::endl;
}
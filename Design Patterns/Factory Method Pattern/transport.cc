#include "transport.h"

#include <iostream>

void Truck::deliver() const {
    std::cout << "Deliver by truck" << std::endl;
}

void Ship::deliver() const {
    std::cout << "Deliver by ship" << std::endl;
}

void Airplane::deliver() const {
    std::cout << "Deliver by plane" << std::endl;
}
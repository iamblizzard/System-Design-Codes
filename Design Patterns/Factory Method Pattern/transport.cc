#include "transport.h"

#include <string>

std::string Truck::deliver() const {
    return "Deliver by truck";
}

std::string Ship::deliver() const {
    return "Deliver by ship";
}
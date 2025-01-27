#include "logistics.h"

#include <iostream>

void Logistics::planDelivery() {
    Transport* transport = createTransport();
    std::cout << transport->deliver() << std::endl;
}

Transport* RoadLogistics::createTransport() {
    return new Truck();
}

Transport* SeaLogistics::createTransport() {
    return new Ship();
}
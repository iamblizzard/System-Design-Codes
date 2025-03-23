#include <iostream>

#include "logistics.h"

void Logistics::planDelivery() {
    Transport* transport = createTransport();
    transport->deliver();
}

Transport* RoadLogistics::createTransport() {
    return new Truck();
}

Transport* SeaLogistics::createTransport() {
    return new Ship();
}

Transport* AirLogistics::createTransport() {
    return new Airplane();
}
#include <iostream>

#include "transport.h"
#include "logistics.h"

int main () {
    Logistics* road_logistics = new RoadLogistics();
    std::cout << "RoadLogistics: ";
    road_logistics->planDelivery();

    Logistics* sea_logistics = new SeaLogistics();
    std::cout << "SeaLogistics: ";
    sea_logistics->planDelivery();

    Logistics* air_logistics = new AirLogistics();
    std::cout << "AirLogistics: ";
    air_logistics->planDelivery();
}
#include "transport.h"
#include "logistics.h"

int main () {
    Logistics* road_logistics = new RoadLogistics();
    road_logistics->planDelivery();

    Logistics* sea_logistics = new SeaLogistics();
    sea_logistics->planDelivery();
}
#include "air-traffic-control-tower.h"

#include <iostream>

void AirTrafficControlTower::requestLanding(Airplane* airplane) {
    airplane->notifyAirTrafficControl("Requesting landing clearance");
}
void AirTrafficControlTower::requestTakeoff(Airplane* airplane) {
    airplane->notifyAirTrafficControl("Requesting takeoff clearance");
}
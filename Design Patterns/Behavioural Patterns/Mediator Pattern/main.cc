#include "airplane.h"
#include "air-traffic-control-tower.h"
#include "commercial-airplane.h"

int main () {
    AirTrafficControlTower* tower = new AirTrafficControlTower();
    Airplane* airplane = new CommercialAirplane(tower);

    airplane->requestTakeoff();
    airplane->requestLanding();
}
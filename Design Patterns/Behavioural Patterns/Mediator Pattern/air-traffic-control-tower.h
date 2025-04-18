#ifndef AIR_TRAFFIC_CONTROL_TOWER_H
#define AIR_TRAFFIC_CONTROL_TOWER_H

#include "airplane.h"

class AirTrafficControlTower {
public:
    void requestLanding(Airplane* airplane);
    void requestTakeoff(Airplane* airplane);
};

#endif // AIR_TRAFFIC_CONTROL_TOWER_H
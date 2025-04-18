#ifndef COMERCIAL_AIRPLANE_H
#define COMERCIAL_AIRPLANE_H

#include "airplane.h"
#include "air-traffic-control-tower.h"

#include <string>

class CommercialAirplane : public Airplane {
    private:
        AirTrafficControlTower* air_traffic_control_tower_;
    public:
        CommercialAirplane(AirTrafficControlTower* tower) :
        air_traffic_control_tower_(tower) {}
        void requestLanding() override;
        void requestTakeoff() override;
        void notifyAirTrafficControl(std::string message) override;
    };

#endif // COMERCIAL_AIRPLANE_H
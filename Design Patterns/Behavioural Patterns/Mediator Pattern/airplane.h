#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>

class Airplane {
public:
    virtual void requestLanding() = 0;
    virtual void requestTakeoff() = 0;
    virtual void notifyAirTrafficControl(std::string message) = 0;
};

#endif // AIRPLANE_H
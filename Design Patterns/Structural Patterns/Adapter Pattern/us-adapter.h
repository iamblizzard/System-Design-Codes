#ifndef US_ADAPTER_H
#define US_ADAPTER_H

#include "us-charging.h"
#include "eu-charging.h"

#include <iostream>

class UsAdapter : public UsCharger {
public:
    void chargeDevice(UsSocket socket);
    void chargeDevice(EuSocket socket);
};

#endif // US_ADAPTER_H
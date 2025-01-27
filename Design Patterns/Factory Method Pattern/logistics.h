#ifndef LOGISTICS_H
#define LOGISTICS_H

#include "transport.h"

class Logistics {
public:
    virtual Transport* createTransport() = 0;
    void planDelivery();
};

class RoadLogistics : public Logistics {
public:
    Transport* createTransport() override;
};

class SeaLogistics : public Logistics {
public:
    Transport* createTransport() override;
};

#endif // LOGISTICS_H
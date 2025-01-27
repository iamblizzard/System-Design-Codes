#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

// transport interface
class Transport {
public:
    virtual ~Transport() {}
    virtual std::string deliver() const = 0;
};

class Truck : public Transport {
public:
    std::string deliver() const override;
};

class Ship : public Transport {
public:
    std::string deliver() const override;
};

#endif // TRANSPORT_H
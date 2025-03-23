#ifndef TRANSPORT_H
#define TRANSPORT_H

// transport interface
class Transport {
public:
    virtual ~Transport() {};
    virtual void deliver() const = 0;
};

class Truck : public Transport {
public:
    void deliver() const override;
};

class Ship : public Transport {
public:
    void deliver() const override;
};

class Airplane : public Transport {
public:
    void deliver() const override;
};

#endif // TRANSPORT_H
#ifndef CAR_PROTOTYPE__H
#define CAR_PROTOTYPE__H

#include <string>
#include <iostream>

class CarPrototype {
public:
    virtual CarPrototype* clone() = 0;
    virtual void print() = 0;
};

class Car : public CarPrototype {
private:
    std::string model;
    std::string color;

public:
    Car(std::string model, std::string color);
    Car(Car* car);
    CarPrototype* clone() override;
    void print() override;
};

#endif // CAR_PROTOTYPE__H
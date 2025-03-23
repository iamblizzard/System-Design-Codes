#include "car-prototype.h"

Car::Car(std::string model, std::string color) : model(model), color(color) {}

Car::Car(Car* car) : model(car->model), color(car->color) {}

CarPrototype* Car::clone() {
    return new Car(this);
}

void Car::print() {
    std::cout << model << " : " << color << std::endl;
}
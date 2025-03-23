#include "car-prototype.h"

#include <iostream>

int main () {
    Car* car = new Car("Toyota", "Red");
    CarPrototype* carClone = car->clone();

    std::cout << "Car: " << std::endl;
    car->print();
    std::cout << "Car Clone: " << std::endl;
    carClone->print();

    return 0;
}
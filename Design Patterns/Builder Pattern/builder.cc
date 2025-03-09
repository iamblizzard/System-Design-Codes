#include "builder.h"

#include <iostream>
using namespace std;

void SportCarBuilder::reset() {
    car = SportsCar();
}

void SportCarBuilder::setSeats(int number) {
    // Set the number of seats
    cout << "Setting the number of seats to " << number << endl;
}

void SportCarBuilder::setEngine(Engine engine) {
    // Set the engine type
    cout << "Setting the engine type to " << engine << endl;
}

void SportCarBuilder::setTripComputer(bool trip_computer) {
    // Set the trip computer
}

void SportCarBuilder::setGPS() {
    // Set the GPS
}

SportsCar SportCarBuilder::getResult() {
    return car;
}

void RegularCarBuilder::reset() {
    car = Car();
}

void RegularCarBuilder::setSeats(int number) {
    // Set the number of seats
    cout << "Setting the number of seats to " << number << endl;
}

void RegularCarBuilder::setEngine(Engine engine) {
    // Set the engine type
    cout << "Setting the engine type to " << engine << endl;
}

void RegularCarBuilder::setTripComputer(bool trip_computer) {
    // Set the trip computer
}

void RegularCarBuilder::setGPS() {
    // Set the GPS
}

Car RegularCarBuilder::getResult() {
    return car;
}
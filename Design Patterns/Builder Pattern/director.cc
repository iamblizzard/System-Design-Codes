#include "director.h"
#include "builder.h"

void Director::constructSportsCar(Builder* builder) {
    builder->reset();
    builder->setSeats(2);
    builder->setEngine(Engine::SportEngine);
    builder->setTripComputer(true);
    builder->setGPS();
}

void Director::constructRegularCar(Builder* builder) {
    builder->reset();
    builder->setSeats(4);
    builder->setEngine(Engine::RegularEngine);
    builder->setTripComputer(false);
    builder->setGPS();
}
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director {
public:
    void constructSportsCar(Builder* builder);
    void constructRegularCar(Builder* builder);
};

#endif // DIRECTOR_H
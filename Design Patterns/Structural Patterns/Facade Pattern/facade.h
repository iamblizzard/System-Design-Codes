#ifndef FACADE_H
#define FACADE_H

#include "systems.h"

class Facade {
public:
    Facade();
    void operation();

private:
    System1* system1_;
    System2* system2_;
};

#endif // FACADE_H
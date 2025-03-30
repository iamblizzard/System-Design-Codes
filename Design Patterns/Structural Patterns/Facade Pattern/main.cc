#include "facade.h"

#include <iostream>

int main () {
    Facade* facade = new Facade();
    facade->operation();
}
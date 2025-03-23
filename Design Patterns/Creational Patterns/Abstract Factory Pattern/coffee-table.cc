#include "coffee-table.h"

#include <iostream>

void ModernCoffeeTable::putCoffee() const {
    std::cout << "Putting coffee on a modern coffee table" << std::endl;
}

void VictorianCoffeeTable::putCoffee() const {
    std::cout << "Putting coffee on a Victorian coffee table" << std::endl;
}
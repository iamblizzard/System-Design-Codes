#include "beverage-maker.h"
#include <iostream>

int main() {
    // Create a TeaMaker and prepare tea
    BeverageMaker* teaMaker = new TeaMaker();
    std::cout << "Preparing tea:" << std::endl;
    teaMaker->prepareBeverage();

    // Create a CoffeeMaker and prepare coffee
    BeverageMaker* coffeeMaker = new CoffeeMaker();
    std::cout << "\nPreparing coffee:" << std::endl;
    coffeeMaker->prepareBeverage();
}
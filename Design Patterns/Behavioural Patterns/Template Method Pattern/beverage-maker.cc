#include "beverage-maker.h"

#include <iostream>

void BeverageMaker::prepareBeverage() {
    // Template method
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}

void BeverageMaker::boilWater() {
    // Common method to boil water
    std::cout << "Boiling water..." << std::endl;
}
void BeverageMaker::pourInCup() {
    // Common method to pour beverage into cup
    std::cout << "Pouring beverage into cup..." << std::endl;
}

void TeaMaker::brew() {
    // Specific implementation for brewing tea
    std::cout << "Steeping the tea..." << std::endl;
}
void TeaMaker::addCondiments() {
    // Specific implementation for adding tea condiments
    std::cout << "Adding lemon..." << std::endl;
}

void CoffeeMaker::brew() {
    // Specific implementation for brewing coffee
    std::cout << "Dripping coffee through filter..." << std::endl;
}
void CoffeeMaker::addCondiments() {
    // Specific implementation for adding coffee condiments
    std::cout << "Adding sugar and milk..." << std::endl;
}
#include <iostream>

#include "furniture-factory.h"
#include "chair.h"
#include "sofa.h"
#include "coffee-table.h"
#include "lamp.h"

int main () {
    FurnitureFactory* modern_factory = new ModernFurnitureFactory();
    Chair* modern_chair = modern_factory->createChair();
    Sofa* modern_sofa = modern_factory->createSofa();
    CoffeeTable* modern_coffee_table = modern_factory->createCoffeeTable();
    Lamp* modern_lamp = modern_factory->createLamp();

    modern_chair->sitOn();
    modern_sofa->sitOn();
    modern_coffee_table->putCoffee();
    modern_lamp->switchOn();

    FurnitureFactory* victorian_factory = new VictorianFurnitureFactory();
    Chair* victorian_chair = victorian_factory->createChair();
    Sofa* victorian_sofa = victorian_factory->createSofa();
    CoffeeTable* victorian_coffee_table = victorian_factory->createCoffeeTable();
    Lamp* victorian_lamp = victorian_factory->createLamp();

    victorian_chair->sitOn();
    victorian_sofa->sitOn();
    victorian_coffee_table->putCoffee();
    victorian_lamp->switchOn();
}
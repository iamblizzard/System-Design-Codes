#include "furniture-factory.h"
#include "chair.h"
#include "sofa.h"
#include "coffee-table.h"

// ModernFurnitureFactory products

Chair* ModernFurnitureFactory::createChair() {
    return new ModernChair();
}

Sofa* ModernFurnitureFactory::createSofa() {
    return new ModernSofa();
}

CoffeeTable* ModernFurnitureFactory::createCoffeeTable() {
    return new ModernCoffeeTable();
}

// VictorianFurnitureFactory products

Chair* VictorianFurnitureFactory::createChair() {
    return new VictorianChair();
}

Sofa* VictorianFurnitureFactory::createSofa() {
    return new VictorianSofa();
}

CoffeeTable* VictorianFurnitureFactory::createCoffeeTable() {
    return new VictorianCoffeeTable();
}
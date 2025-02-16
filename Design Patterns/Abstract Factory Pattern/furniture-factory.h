#ifndef FURNITURE_FACTORY__H
#define FURNITURE_FACTORY__H

#include "chair.h"
#include "sofa.h"
#include "coffee-table.h"

class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual CoffeeTable* createCoffeeTable() = 0;
};

class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    CoffeeTable* createCoffeeTable() override;
};

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    CoffeeTable* createCoffeeTable() override;
};

#endif // FURNITURE_FACTORY__H
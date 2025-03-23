#ifndef FURNITURE_FACTORY__H
#define FURNITURE_FACTORY__H

#include "chair.h"
#include "sofa.h"
#include "coffee-table.h"
#include "lamp.h"

class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual CoffeeTable* createCoffeeTable() = 0;
    virtual Lamp* createLamp() = 0;
};

class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    CoffeeTable* createCoffeeTable() override;
    Lamp* createLamp() override;
};

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    CoffeeTable* createCoffeeTable() override;
    Lamp* createLamp() override;
};

#endif // FURNITURE_FACTORY__H
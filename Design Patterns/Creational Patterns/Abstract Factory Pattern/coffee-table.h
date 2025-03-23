#ifndef COFFEE_TABLE__H
#define COFFEE_TABLE__H

class CoffeeTable {
    public:
    virtual ~CoffeeTable() {};
    virtual void putCoffee() const = 0;
};

class ModernCoffeeTable : public CoffeeTable {
    public:
    void putCoffee() const override;
};

class VictorianCoffeeTable : public CoffeeTable {
    public:
    void putCoffee() const override;
};

#endif // COFFEE_TABLE__H
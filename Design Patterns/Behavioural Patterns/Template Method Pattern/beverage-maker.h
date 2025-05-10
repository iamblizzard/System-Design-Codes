#ifndef BEVERAGE_MAKER_H
#define BEVERAGE_MAKER_H

class BeverageMaker {
public:
    // Template method
    void prepareBeverage();
protected:
    // Abstract methods to be implemented by subclasses
    virtual void brew() = 0; // Brew the beverage
    virtual void addCondiments() = 0; // Add condiments

private:
    void boilWater();
    void pourInCup();
};

class TeaMaker : public BeverageMaker {
protected:
    void brew() override;
    void addCondiments() override;
};

class CoffeeMaker : public BeverageMaker {
protected:
    void brew() override;
    void addCondiments() override;
};

#endif // BEVERAGE_MAKER_H
#ifndef Lamp__H
#define Lamp__H

class Lamp {
    public:
    virtual ~Lamp() {};
    virtual void switchOn() const = 0;
};

class ModernLamp : public Lamp {
    public:
    void switchOn() const override;
};

class VictorianLamp : public Lamp {
    public:
    void switchOn() const override;
};

#endif // Lamp__H
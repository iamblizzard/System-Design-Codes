#ifndef SOFA__H
#define SOFA__H

class Sofa {
    public:
    virtual ~Sofa() {};
    virtual void sitOn() const = 0;
};

class ModernSofa : public Sofa {
    public:
    void sitOn() const override;
};

class VictorianSofa : public Sofa {
    public:
    void sitOn() const override;
};

#endif // SOFA__H
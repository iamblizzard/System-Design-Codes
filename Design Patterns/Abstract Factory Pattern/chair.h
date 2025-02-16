#ifndef FURNITURE__H
#define FURNITURE__H

class Chair {
    public:
    virtual ~Chair() {};
    virtual void sitOn() const = 0;
};

class ModernChair : public Chair {
    public:
    void sitOn() const override;
};

class VictorianChair : public Chair {
    public:
    void sitOn() const override;
};

#endif // FURNITURE__H
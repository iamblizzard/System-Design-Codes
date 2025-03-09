#ifndef BUILDER_H
#define BUILDER_H

enum Engine {
    SportEngine = 1,
    RegularEngine = 2,
};

class Car {};
class SportsCar {};

class Builder {
public:
    virtual void reset() = 0;
    virtual void setSeats(int number) = 0;
    virtual void setEngine(Engine engine) = 0;
    virtual void setTripComputer(bool trip_computer) = 0;
    virtual void setGPS() = 0;
};

class SportCarBuilder : public Builder {
private:
    SportsCar car;

public:
    void reset() override;
    void setSeats(int number) override;
    void setEngine(Engine engine) override;
    void setTripComputer(bool trip_computer) override;
    void setGPS() override;
    SportsCar getResult();
};

class RegularCarBuilder : public Builder {
private:
    Car car;

public:
    void reset() override;
    void setSeats(int number) override;
    void setEngine(Engine engine) override;
    void setTripComputer(bool trip_computer) override;
    void setGPS() override;
    Car getResult();
};

#endif // BUILDER_H
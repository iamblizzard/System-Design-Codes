#ifndef DEVICE_H
#define DEVICE_H

class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class TV : public Device {
public:
    void turnOn() override;
    void turnOff() override;
    void changeChannel();
};

class Radio : public Device {
public:
    void turnOn() override;
    void turnOff() override;
    void adjustVolume();
};

#endif // DEVICE_H
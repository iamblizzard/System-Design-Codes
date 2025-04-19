#ifndef OBSERVER_DEVICES_H
#define OBSERVER_DEVICES_H

#include "observer.h"

#include <iostream>

class PhoneDisplay : public Observer {
public:
    void update(std::string weather) override;
};

class TvDisplay : public Observer {
public:
    void update(std::string weather) override;
};

#endif // OBSERVER_DEVICES_H
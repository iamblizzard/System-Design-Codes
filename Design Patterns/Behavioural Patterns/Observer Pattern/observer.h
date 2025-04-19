#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
public:
    virtual void update(std::string weather) = 0;
};

#endif // OBSERVER_H
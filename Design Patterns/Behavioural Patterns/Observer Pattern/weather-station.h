#ifndef WEATHER_STATION_H
#define WEATHER_STATION_H

#include "observer.h"
#include "subject.h"

#include <list>
#include <string>

class WeatherStation : public Subject {
public:
    WeatherStation() : weather("default"), observers({}) {}

    void addObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;
    void setWeather(std::string weather);

private:
    std::string weather;
    std::list<Observer*> observers;
};

#endif // WEATHER_STATION_H
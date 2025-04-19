#include "weather-station.h"

void WeatherStation::addObserver(Observer* observer) {
    this->observers.push_back(observer);
}

void WeatherStation::removeObserver(Observer* observer) {
    this->observers.remove(observer);
}

void WeatherStation::notifyObservers() {
    for (Observer* observer : this->observers) {
        observer->update(this->weather);
    }
}

void WeatherStation::setWeather(std::string weather) {
    this->weather = weather;
    notifyObservers();
}
#include "observer.h"
#include "weather-station.h"
#include "observer-devices.h"

int main() {
    WeatherStation* weather_station = new WeatherStation();

    Observer* phone_display = new PhoneDisplay();
    Observer* tv_display = new TvDisplay();

    // Add observers to the weather station
    weather_station->addObserver(phone_display);
    weather_station->addObserver(tv_display);

    // Set the weather and notify observers
    weather_station->setWeather("Sunny");
    weather_station->setWeather("Rainy");

    // Remove an observer and set the weather again
    weather_station->removeObserver(phone_display);
    weather_station->setWeather("Cloudy");
}
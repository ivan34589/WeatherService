#include "Weather.h"
#include <iostream>

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
    : city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) 
{

}

void Weather::printWeatherDescription()
{
    std::cout << "Weather in " << city << ": " << weather << std::endl;
}

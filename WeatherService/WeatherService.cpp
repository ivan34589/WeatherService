#include <iostream>
#include "Service.h"
#include "Weather.h"
#include "json.hpp"
#include "XmlService.h"
#include "JsonService.h"

int main()
{
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");

    JsonService js;
    Weather w2 = js.getWeather("weather.json");

    return 0;
}
#include <iostream>
#include "Service.h"
#include "Weather.h"
#include "json.hpp"
#include "XmlService.h"
//#include "JsonService.h"

int main()
{
    //JsonService js;
    //Weather w1 = js.getWeather("weather.json");

    XmlService xs;
    Weather w = xs.getWeather("weather.xml");

    return 0;
}
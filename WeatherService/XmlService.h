#pragma once
#include "Service.h"
#include "Weather.h"
#include "pugixml-1.13-20230530T065518Z-001/pugixml-1.13/src/pugixml.hpp"

class XmlService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
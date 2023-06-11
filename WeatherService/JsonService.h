#pragma once
#include "Service.h"
#include "json.hpp"
#include "pugixml-1.13-20230530T065518Z-001/pugixml-1.13/src/pugixml.hpp"

class JsonService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
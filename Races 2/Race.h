#pragma once
#include <string>
#include "Bike.h"
#include "Car.h"

class Race
{
public:
	Race(size_t quality,const std::string& name);
	~Race();
	size_t getQuality();
	const std::string getName();
	void setQuality(size_t quality);
	void setName(const std::string& name);
	static void races_func(Car& num1, Bike& num2, Race& num3); //использование static позволило обратитьс€ к методу не через создание объекта
private:                                                       //а лишь указать class::метод
	size_t _quality;
	std::string _name;

};


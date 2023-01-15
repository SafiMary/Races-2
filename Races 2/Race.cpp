#include "Race.h"
#include "Bike.h"
#include "Car.h"
#include <string>
#include <iostream>

Race::Race(size_t quality,const std::string& name) : _quality(quality), _name(name) {}
Race::~Race(){}
size_t Race::getQuality() {
	return _quality;
}
const std::string Race::getName() {
	return _name;
}
void Race::setQuality(size_t quality) {
	_quality = quality;
}
void Race::setName(const std::string& name) {
	_name = name;
}

 void Race::races_func(Car& num1, Bike& num2, Race& num3){
	if (num3.getQuality() > 30 && num1.getSpeed() > num2.getSpeed()) { //если качество трассы более 30 и скорость 1-го больше скорости 2-го
		std::cout << num1.getModel() << " приехал быстрее\n";         // то 1-ый выйграл
	}
	else if (num3.getQuality() < 30 && num1.getSpeed() > num2.getSpeed()) { //если качество трассы менее 30 и скорость 1-го больше скорости 2-го
		std::cout << num2.getModel() << " приехал быстрее\n";         // то 2-ый выйграл
	}
	else if (num3.getQuality() > 30 && num1.getSpeed() < num2.getSpeed()) { //если качество трассы менее 30 и скорость 1-го меньше скорости 2-го
		std::cout << num2.getModel() << " приехал быстрее\n";         // то 2-ый выйграл
	}
	else if (num3.getQuality() < 30 && num1.getSpeed() == num2.getSpeed()) { //если качество трассы менее 30 и скорость 1-го равна скорости 2-го
		std::cout << num1.getModel() << " и " <<
			num2.getModel() << " приехали одновременно\n";                  // то оба приехали в одно время
	}
	else if (num3.getQuality() > 30 && num1.getSpeed() == num2.getSpeed()) { // если качество трассы более 30 и скорость 1 - го равна скорости 2 - го
		std::cout << num1.getModel() << " приехал быстрее\n";                // то 1-ый выйграл
	}

};
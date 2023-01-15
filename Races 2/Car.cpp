#include "Car.h"
#include <string>


Car::Car(size_t speed,const std::string& model) : _speed(speed), _model(model) {}
Car::~Car() {}
size_t Car::getSpeed() {
	return _speed;
}
void Car::setSpeed(size_t speed) {
	_speed = speed;
}
const std::string& Car::getModel() {
	return _model;
}
void Car::setModel(const std::string& model) {
	_model = model;
}

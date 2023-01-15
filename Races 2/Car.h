#pragma once
#include <string>

class Car {
public:
	Car(size_t speed,  const std::string& model);
	~Car();
	size_t getSpeed();
	void setSpeed(size_t speed);
	const std::string& getModel();
	void setModel(const std::string& model);
	
private:
	size_t _speed;
	std::string _model;
	
};

#pragma once
#include <string>

class Bike {
public:
	Bike(size_t speed,const std::string& model);
	~Bike();
	size_t getSpeed();
	void setSpeed(size_t speed);
	const std::string& getModel();
	void setModel(const std::string& model);
	
private:
	size_t _speed;
	std::string _model;

};


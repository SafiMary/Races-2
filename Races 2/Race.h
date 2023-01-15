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
	static void races_func(Car& num1, Bike& num2, Race& num3); //������������� static ��������� ���������� � ������ �� ����� �������� �������
private:                                                       //� ���� ������� class::�����
	size_t _quality;
	std::string _name;

};


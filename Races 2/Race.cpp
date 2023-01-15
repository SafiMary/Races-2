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
	if (num3.getQuality() > 30 && num1.getSpeed() > num2.getSpeed()) { //���� �������� ������ ����� 30 � �������� 1-�� ������ �������� 2-��
		std::cout << num1.getModel() << " ������� �������\n";         // �� 1-�� �������
	}
	else if (num3.getQuality() < 30 && num1.getSpeed() > num2.getSpeed()) { //���� �������� ������ ����� 30 � �������� 1-�� ������ �������� 2-��
		std::cout << num2.getModel() << " ������� �������\n";         // �� 2-�� �������
	}
	else if (num3.getQuality() > 30 && num1.getSpeed() < num2.getSpeed()) { //���� �������� ������ ����� 30 � �������� 1-�� ������ �������� 2-��
		std::cout << num2.getModel() << " ������� �������\n";         // �� 2-�� �������
	}
	else if (num3.getQuality() < 30 && num1.getSpeed() == num2.getSpeed()) { //���� �������� ������ ����� 30 � �������� 1-�� ����� �������� 2-��
		std::cout << num1.getModel() << " � " <<
			num2.getModel() << " �������� ������������\n";                  // �� ��� �������� � ���� �����
	}
	else if (num3.getQuality() > 30 && num1.getSpeed() == num2.getSpeed()) { // ���� �������� ������ ����� 30 � �������� 1 - �� ����� �������� 2 - ��
		std::cout << num1.getModel() << " ������� �������\n";                // �� 1-�� �������
	}

};
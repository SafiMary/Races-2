#include <iostream>
#include <string>
#include <windows.h>
#include "Car.h"
#include "Bike.h"
#include "Race.h"




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a(40,"Mercedes");
	Bike b(10,"Harley");
	Car r(17, "Nissan");
	Bike t(35, "Moto");
	Race c(36, "road_1");
	Race d(20, "road_2");
	Race::races_func(a, b, c); //������-1 ��������� "Harley" � "Mercedes, �������� "Mercedes", �.� � ���� �������� ������ � ������ � ��������� > 30
	Race::races_func(a, b, d); //������ -2 ��������� "Harley" � "Mercedes, �������� "Harley", ���� � ���� �������� ������,�� ������ � ��������� < 30
	Race::races_func(r, t, c); //������-1 ��������� "Nissan" � "Moto", �������� "Moto", �.� � ���� �������� ������ � ������ � ��������� > 30

}



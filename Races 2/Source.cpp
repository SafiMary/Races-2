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
	Race::races_func(a, b, c); //трасса-1 участвуют "Harley" и "Mercedes, победиль "Mercedes", т.к у него скорость больше и трасса с качеством > 30
	Race::races_func(a, b, d); //трасса -2 участвуют "Harley" и "Mercedes, победиль "Harley", хоть у него скорость меньше,но трасса с качеством < 30
	Race::races_func(r, t, c); //трасса-1 участвуют "Nissan" и "Moto", победиль "Moto", т.к у него скорость больше и трасса с качеством > 30

}



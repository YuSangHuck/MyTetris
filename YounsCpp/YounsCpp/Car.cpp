#include "car.h"
#include <cstring>
#include <iostream>

using namespace std;

void Car::SetMembers(const char *ID, int fuel, int speed) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = speed;
	
	return;
}
void Car::ShowCarState() {
	cout << "gamerID : " << gamerID << endl;
	cout << "fuelGague : " << fuelGauge << endl;
	cout << "curSpeed : " << curSpeed << endl;
	return;
}
void Car::Accel() {
	if (curSpeed > static_cast<int>(CAR_CONST::MAX_SPD))
		curSpeed = static_cast<int>(CAR_CONST::MAX_SPD);
	else
		curSpeed += static_cast<int>(CAR_CONST::ACC_STEP);
	return;
}
void Car::Break() {
	if (curSpeed < static_cast<int>(CAR_CONST::BRK_STEP))
		curSpeed = 0;
	else
		curSpeed -= static_cast<int>(CAR_CONST::BRK_STEP);
	return;
}
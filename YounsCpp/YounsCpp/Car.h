#pragma once

enum class CAR_CONST {
	ID_LEN		= 20,
	MAX_SPD		= 200,
	FUEL_STEP	= 2,
	ACC_STEP	= 10,
	BRK_STEP	= 10
};
//namespace CAR_CONST {
//	enum {
//		ID_LEN		= 20,
//		MAX_SPD		= 200,
//		FUEL_STEP	= 2,
//		ACC_STEP	= 10,
//		BRK_STEP	= 10
//	};	
//}

class Car {
private:
	char gamerID[static_cast<int>(CAR_CONST::ID_LEN)];
	int fuelGauge;
	int curSpeed;
public:
	void SetMembers(const char *ID, int fuel, int speed);
	void ShowCarState();
	void Accel();
	void Break();
};
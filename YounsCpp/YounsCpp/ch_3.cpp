/*=============================================

				struct in c++

=============================================*/
//#include <iostream>
//#define ID_LEN		30
//#define MAX_SPD		200
//#define FUEL_STEP	2
//#define ACC_STEP	10
//#define BRK_STEP	10
//
//using namespace std;
//
//struct Car {
//	enum {
//		enum_ID_LEN = 20,
//		enum_MAX_SPD = 200,
//		enum_FUEL_STEP = 2,
//		enum_ACC_STEP = 10,
//		enum_BRK_STEP = 10,
//	};
//	char gamerID[ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState(const Car &car);
//	void Accel(Car &car);
//	void Break(Car &car);
//};
//
//void Car::ShowCarState(const Car &car){
//	cout << "gamerID : " << gamerID << endl;
//	cout << "fuelGauge : " << fuelGauge << endl;
//	cout << "curSpeed : " << curSpeed << endl;
//	return;
//}
//
//void Car::Accel(Car &car) {
//	return;
//}
//
//void Car::Break(Car &car) {
//	if (curSpeed < BRK_STEP) {
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= BRK_STEP;
//	return;
//}
//
//int main() {
//	Car run99 = { "run99",100,0 };
//	Car sped77 = { "sped77",100,0 };
//	cout << "sped77.curSpeed : " << sped77.curSpeed;
//	return 0;
//}

/*=============================================

				class & object

=============================================*/
#include <iostream>
#include <cstring>
#define ID_LEN		30
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

using namespace std;

class Car {
private:
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	//void SetMembers(char *ID, int fuel, int speed);
	//void ShowCarState(const Car &car);
	//void Accel(Car &car);
	//void Break(Car &car);

	void SetMembers(char *ID, int fuel, int speed) {
		strcpy(gamerID, ID);
		fuelGauge = fuel;
		curSpeed = speed;
		return;
	}
	void ShowCarState() {
		cout << "gamerID : " << gamerID << endl;
		cout << "fuelGauge : " << fuelGauge << endl;
		cout << "curSpeed : " << curSpeed << endl;
		return;
	}
	void Accel(Car &car) {
		return;
	}
	void Break(Car &car) {
		if (curSpeed < BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
		return;
	}
};

//void Car::SetMembers(char *ID, int fuel, int speed) {
//	strcpy(gamerID, ID);
//	fuelGauge = fuel;
//	curSpeed = speed;
//	return;
//}
//void Car::ShowCarState(const Car &car) {
//	cout << "gamerID : " << gamerID << endl;
//	cout << "fuelGauge : " << fuelGauge << endl;
//	cout << "curSpeed : " << curSpeed << endl;
//	return;
//}
//void Car::Accel(Car &car) {
//	return;
//}
//void Car::Break(Car &car) {
//	if (curSpeed < BRK_STEP) {
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= BRK_STEP;
//	return;
//}

int main() {
	Car run99,sped77;
	run99.SetMembers("run99", 50, 10);
	sped77.SetMembers("sped77", 100, 77);
	
	cout << "---run99 state---" << endl;
	run99.ShowCarState();
	cout << "--sped77 state--" << endl;
	sped77.ShowCarState();

	return 0;
}
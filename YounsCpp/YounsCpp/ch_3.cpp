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

/*					example 1				 */
//#include <iostream>
////#include <cstring>
//#define ID_LEN		30
//#define MAX_SPD		200
//#define FUEL_STEP	2
//#define ACC_STEP	10
//#define BRK_STEP	10
//
//using namespace std;
//
//class Car {
//private:
//	char gamerID[ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//public:
//	//void SetMembers(char *ID, int fuel, int speed);
//	//void ShowCarState(const Car &car);
//	//void Accel(Car &car);
//	//void Break(Car &car);
//
//	void SetMembers(char *ID, int fuel, int speed) {
//		strcpy(gamerID, ID);
//		fuelGauge = fuel;
//		curSpeed = speed;
//		return;
//	}
//	void ShowCarState() {
//		cout << "gamerID : " << gamerID << endl;
//		cout << "fuelGauge : " << fuelGauge << endl;
//		cout << "curSpeed : " << curSpeed << endl;
//		return;
//	}
//	void Accel(Car &car) {
//		return;
//	}
//	void Break(Car &car) {
//		if (curSpeed < BRK_STEP) {
//			curSpeed = 0;
//			return;
//		}
//		curSpeed -= BRK_STEP;
//		return;
//	}
//};

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

//int main() {
//	Car run99,sped77;
//	run99.SetMembers("run99", 50, 10);
//	sped77.SetMembers("sped77", 100, 77);
//	
//	cout << "---run99 state---" << endl;
//	run99.ShowCarState();
//	cout << "--sped77 state--" << endl;
//	sped77.ShowCarState();
//
//	return 0;
//}

/*					example 2				 */
#include <iostream>
using namespace std;
class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void SetMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowResult();
};
void FruitSeller::SetMembers(int price, int num, int money) {
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
	return;
}
int FruitSeller::SaleApples(int money) {
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowResult() {
	cout << "extra apples : " << numOfApples << endl;
	cout << "earn money : " << myMoney << endl;
}

class FruitBuyer {
private:
	int myMoney;
	int numOfApples;
public:
	void SetMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	// ref
	void BuyApples(FruitSeller &seller, int money) {
		cout << "use ref" << endl;
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	// pointer
	void BuyApples(FruitSeller *seller, int money) {
		cout << "use pointer" << endl;
		//numOfApples += seller->SaleApples(money);
		numOfApples += (*seller).SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		cout << "current charge : " << myMoney << endl;
		cout << "extra apples : " < numOfApples << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.SetMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.SetMembers(5000);
	// ref
	cout << "call ref_func : ";
	buyer.BuyApples(seller, 2000);
	// pointer
	cout << "call ptr_func : ";
	buyer.BuyApples(&seller, 2000);

	cout << "--- seller ---" << endl;
	seller.ShowResult();
	cout << "--- buyer ---" << endl;
	buyer.ShowBuyResult();
	return 0;
}


/*					ref					*/
//class Cls1 {
//public:
//	void Cls1_func1(Cls2 &obj2) {
//		obj2.Cls2_func1();
//	}
//};
//class Cls2 {
//public:
//	void Cls2_func1() {
//		return;
//	}
//};
//int main() {
//	Cls1 cls1;
//	Cls2 cls2;
//	cls1.Cls1_func1(cls2);
//	return 0;
//}

/*				pointer				*/
//class Cls1 {
//public:
//	void func1(Cls2 *obj2) {
//		obj2->func1();
//		return;
//	}
//};
//class Cls2 {
//public:
//	void func1() {
//		return;
//	}
//};
//int main() {
//	Cls1 cls1;
//	Cls2 cls2;
//	cls1.func1(&cls2);
//	return 0;
//}

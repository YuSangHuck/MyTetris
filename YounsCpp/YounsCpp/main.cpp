#include "Car.h"
#include <iostream>
using namespace std;
int main() {
	Car BG_100_20, SH_60_100;
	BG_100_20.SetMembers("BG", 100, 20);
	cout << "-- BG State ---" << endl;
	BG_100_20.ShowCarState();
	
	SH_60_100.SetMembers("SH", 60, 100);
	cout << "-- SH State ---" << endl;
	SH_60_100.ShowCarState();
	
	SH_60_100.SetMembers("SH", 10, 100);
	cout << "-- SH State ---" << endl;
	SH_60_100.ShowCarState();
	
	return 0;
}
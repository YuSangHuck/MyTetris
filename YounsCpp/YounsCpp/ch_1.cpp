#include <iostream>

using namespace std;

// print Hellow world! in c++
//int main() {
//	int num = 20;
//	cout << "hello world!" << std::endl;
//	cout << "hello " << "world!" << std::endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << std::endl;
//
//	return 0;
//}

// scanf in c++
//int main() {
//	int val1;
//	cout << "1st value : ";
//	cin >> val1;
//	int val2;
//	cout << "2nd value : ";
//	cin >> val2;
//	int result = val1 + val2;
//	cout << val1 << '+' << val2 << '=' << result << std::endl;
//
//	return 0;
//}

// declare local variable in c++
//int main() {
//	int val1, val2;
//	int result = 0;
//	cout << "two values : ";
//	cin >> val1 >> val2;
//	if (val1 < val2) {
//		for (int i = val1 + 1; i < val2; i++)
//			result += i;
//	}
//	else {
//		for (int i = val2 + 1; i < val1; i++)
//			result += i;
//	}
//	cout << "result : " << result << endl;
//	return 0;
//}

// print string based on array in c++
//int main() {
//	char name[100];
//	char lang[200];
//	cout << "name? ";
//	cin >> name;
//	cout << "lang? ";
//	cin >> lang;
//	cout << "name is " << name << ", lang is " << lang << endl;
//
//	return 0;
//}

// overloading of function in c++
//int myfunc(int num) {
//	cout << "myfunc(int num) called" << endl;
//	num++;
//	return num;
//}
//int myfunc(int a, int b=1) {
//	cout << "myfunc(int a, int b) called" << endl;
//	return a + b;
//}
//int main() {
//	myfunc(20);
//	myfunc(30, 40);
//	return 0;
//}

/*=============================================

				macro & inline

=============================================*/
//#define SQUARE_macro(x) (x*x)			// free to DataType
//inline int SQUARE_inline(int x) {		// template -> free to Datatype
//	return x*x;
//}
//int main() {
//	cout << SQUARE_macro(2.5) << endl;
//	cout << SQUARE_inline(2.5) << endl;
//	return 0;
//}


/*=============================================

					namespace

=============================================*/
//namespace name {			// name
//	void SimpleFunc();		// name::SimpleFunc
//	namespace Subname1 {	// name::Subname1
//		int num1 = 1;		// name::Subname1::num1
//	}
//	namespace Subname2 {	// name::Subname2
//		int num1 = 2;		// name::Subname2::num1
//	}
//}
//
//namespace name2 {			// name2
//	void SimpleFunc();		// name2:::SimpleFunc
//}
//
//void name::SimpleFunc() {
//	cout << "Namespace : name \nFunc : SimpleFunc\n\n";
//	return;
//}
//void name2::SimpleFunc() {
//	cout << "Namespace : name2 \nFunc : SimpleFunc\n\n";
//	return;
//}
//void SimpleFunc() {
//	cout << "Namespace : ????? \nFunc : SimpleFunc\n\n";
//}
//int main() {
//	cout << "SimpleFunc();" << endl;
//	SimpleFunc();
//	cout << "::SimpleFunc();" << endl;
//	::SimpleFunc();
//	cout << "name::SimpleFunc();" << endl;
//	name::SimpleFunc();
//	cout<<"name2::SimpleFunc();" << endl;
//	name2::SimpleFunc();
//	cout << "name::Subname1::num1;" << endl;
//	cout << name::Subname1::num1 << endl << endl;
//	cout << "name::Subname2::num1;" << endl;
//	cout << name::Subname2::num1 << endl << endl;
//	return 0;
//}

//int val = 100;
//int main() {
//	int val = 20;
//	cout << "local : " << val << endl;
//	cout << "global : " << ::val << endl;
//	
//	return 0;
//}
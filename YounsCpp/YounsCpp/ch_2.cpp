#include<iostream>
using namespace std;

/*=============================================

					boolean

=============================================*/
// NewDataType = boolean
//int main() {
//	int num = 10;
//	int i = 0;
//	cout << "true : " << true << endl;
//	cout << "false : " << false << endl;
//	while (true) {
//		cout << i++ << ' ';
//		if (i > num)
//			break;
//	}
//	cout << endl;
//	cout << "sizeof 1 : " << sizeof(1) << endl;
//	cout << "sizeof 0 : " << sizeof(0) << endl;
//	cout << "sizeof true : " << sizeof(true) << endl;
//	cout << "sizeof false : " << sizeof(false) << endl;
//
//	return 0;
//}


/*=============================================

					reference

=============================================*/
//int main() {
//	int num1 = 1020;
//	int &num2 = num1;
//	cout << "num1 : " << num1 << endl;
//	cout << "num2 : " << num2 << endl;
//	cout << "&num1 : " << &num1 << endl;
//	cout << "&num2 : " << &num2 << endl;
//
//	return 0;
//}
//int main() {
//	int num = 1;
//	int *ptr = &num;
//	int **dptr = &ptr;
//	int &ref = num;
//	int *(&pref) = ptr;
//	int **(&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//
//	return 0;
//}

//int *SimpleFunc(int *ptr) {
//	return ptr + 1;
//}
//int *SimpleFunc(int *ptr) {
//	if (ptr == NULL)
//		return NULL;
//	*ptr = 20;
//	return ptr + 1;
//}
//int main() {
//	int num = 1;
//	int *ptr = &num;
//	cout << "ptr : " << ptr << endl;
//	cout << "*ptr : " << *ptr << endl << endl;
//	ptr = SimpleFunc(ptr);
//	cout << "ptr : " << ptr << endl;
//	cout << "*ptr : " << *ptr << endl << endl;
//	
//	cout << *(ptr - 1);
//	return 0;
//}

//void swapbyref(int &ref1, int &ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//	return;
//}
//void swapbyptr(int *ptr1, int *ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	return;
//}
//int main() {
//	int val1 = 1;
//	int val2 = 2;
//
//	cout << "before swap, val1 : " << val1 << ", val2 : " << val2 << endl;
//	
//	swapbyref(val1, val2);
//	swapbyptr(&val1, &val2);
//	
//	cout << "after swap, val1 : " << val1 << ", val2 : " << val2 << endl;
//	
//	return 0;
//}

//int &RefRetFuncOne(int &ref)
//{
//	ref++;
//	return ref;
//}
//int main(int argc, char* argv[])
//{
//	int num1 = 1;
//	int &num2 = RefRetFuncOne(num1);
//	++num1;
//	++num2;
//
//	std::cout << num1 << std::endl;
//	std::cout << num2 << std::endl;
//	
//	return 0;
//}


/*=============================================

			dynamic memory allocation

=============================================*/
//int main() {
//	int *iptr = new int;
//	double *dptr = new double;
//	int *iarr = new int[3];
//	double *darr = new double[7];
//	delete iptr;
//	delete dptr;
//	delete iarr;
//	delete darr;
//	return 0;
//}


/*=============================================

			standard library(c -> cpp)

=============================================*/
// c라이브러리 앞에 c를붙이고 .h를제거
// ex1) string.h -> cstring
// ex2) stdlib.h -> cstdlib
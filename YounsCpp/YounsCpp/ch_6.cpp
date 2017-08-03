/*=============================================

			const & friend & static

=============================================*/
//#include<iostream>
//using namespace std;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n) {
//	}
//	SoSimple& AddNum(int n) {
//		num += n;
//		return *this;
//	}
//	void ShowData() const {
//		cout << "num=" << num << endl;
//		return;
//	}
//};
//
//int main() {
//	const SoSimple obj(7);
//	obj.AddNum(3);
//	obj.ShowData();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Boy {
//private:
//	int height;
//	//friend class Girl;
//public:
//	friend class Girl;
//	Boy(int len) : height(len) {
//		cout << "BOY constructor called" << endl;
//		cout << "heigh=" << height << endl;
//	}
//};
//class Girl {
//private:
//	char phNum[20];
//public:
//	Girl(char *num) {
//		strcpy(phNum, num);
//		cout << "Girl constructor called" << endl;
//		cout << "phNum=" << phNum << endl;
//	}
//	void ShowYourFriendInfo(Boy &frn) {
//		cout << "his height=" << frn.height << endl;
//	}
//};
//	
//int main() {
//	Boy JD(171);
//	Boy AB(169);
//	Girl SH("010-0000-0000");
//	SH.ShowYourFriendInfo(JD);
//	SH.ShowYourFriendInfo(AB);
//}

#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	}
};
int SoSimple::simObjCnt = 0;
int main() {
	
	return 0;
}
#include "iostream"
using namespace std;

class A {
	private:
		int privateA;
	public:
		A(int t1 = 0) : privateA(t1){};
		void showValue();
		~A();
};
A::~A(){
	cout << "Ham huy lop A()" << endl;
}
void A::showValue(){
	cout << privateA << endl;
}


class B : public A {
	private:
		int privateB;
	public:
		B(int t1 = 0, int t2 = 0) : A(t1) {
			privateB = t2;
		}
		void show();
		~B();
};
B::~B(){
	cout << "ham huy lop B()" << endl;
}
void B::show() {
	cout << "show function of class B()" << endl;
	cout << privateB << endl;
	showValue();
}

int main(){
	B b1 (3, 4);
	b1.show();
	return 0;
}

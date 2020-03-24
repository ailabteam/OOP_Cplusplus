#include "iostream"
using namespace std;

class A {
	private:
		int privateA;
	public:
		A(int t = 0) : privateA(t){};
		void showValue();
		~A();
};
A::~A(){
	cout << "ham huy lop A()" << endl;
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

B::~B() {
	cout << "ham huy lop B()" << endl;
}

void B::show() {
	cout << "show of class B()" << endl;
	cout << privateB << endl;
	showValue();
}

int main(){
	B b(1, 4);
	b.show();
	
	return 0;
}





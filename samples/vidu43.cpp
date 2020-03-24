#include "iostream"
using namespace std;

class A {
	private:
		int privateA;
	protected:
		int protectedA;
	public:
		A(int t1 = 0, int t2 = 0) : privateA(t1), protectedA(t2){};
		void showValue();
};
void A::showValue(){
	cout << privateA + protectedA << endl;
}

class B : public A {
	private:
		int privateB;
	protected:
		int protectedB;
	public:
		B(){};
		void show();
};

void B::show(){
	showValue(); // public function of class A
	protectedA = 100;  // protected of class A
	//privateA = 200; // private of class A
}

class C : private A {
	private:
		int privateC;
	protected:
		int protectedC;
	public:
		C(){};
		void show();
};

void C::show() {
	showValue();
	protectedA = 12;
	//privateA = 32;
}

int main(){
	A a1(3, 4);
	a1.showValue();
	//a1.privateA = 100; // private of class A
	//a1.protectedA = 100;
	
	B b1;
	b1.show();
	b1.showValue();
	//b1.protectedB = 109; // khong truy xuat duoc ben ngoai
	//b1.protectedA = 109;
	
	C c1;
	c1.show();
	//c1.protectedA = 12;
	//c1.protectedC = 12;
	//c1.showValue();
	return 0;
}





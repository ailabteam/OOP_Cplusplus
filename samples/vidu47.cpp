#include "iostream"
using namespace std;

class A {
	protected:
		int protectedA;
	private:
		int privateA;
	public:
		A(int t1 = 0, int t2 = 0) : protectedA(t1), privateA (t2){};
		void showValue();
};
void A::showValue(){
	cout << privateA + protectedA << endl;
}

class B : public A {
	protected:
		int protectedB;
	private:
		int privateB;
	public:
		B(){};
		void show();
};

void B::show(){
	showValue(); //public function of class A
	protectedA = 1;
	// privateA = 3; // private of class A
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

void C::show(){
	showValue();
	protectedA = 3;
	//privateA = 3;
}

int main(){
	
	//A a1(3, 4);
	//a1.showValue();
	//a1.protectedA = 3;
	
	//B b1;
	//b1.show();
	//b1.showValue();
	// b1.protectedA = 3; // protected of class A
	
	//C c1;
	//c1.show();
	//.c1.showValue(); // luc nay showValue --> private ---> error
	//c1.protectedC = 3;
	//c1.protectedA = 3;
	return 0;
}



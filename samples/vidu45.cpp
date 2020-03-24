#include "iostream"
using namespace std;

class A {
	private:
		int privateA;
	public:
		virtual void showValue() = 0; // phuong thuc ao thuan ti
};

class B : public A {
	private:
		int privateB;
	public:
		void show();
		virtual void showValue(); // dinh nghia phuong thuc ao thuan ti.
};

void B::showValue() {
	cout << "showValue function of class B()" << endl;
}

void B::show() {
	cout << "show function of class B()" << endl;
	showValue();
}

class C : public A {
	private:
		int privateC;
	public:
		void show();
		virtual void showValue();
};
void C::show() {
	cout << "show function() of class C" << endl;
	showValue();
}
void C::showValue() {
	cout << "showValue function of class C()" << endl;
}

int main(){
	A *arr[4] = {new B(), new C(), new C(), new B()};
	for(int i = 0; i < 4; i++){
		arr[i]->showValue();
	}
	return 0;
}




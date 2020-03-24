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
		int privateA;
	public:
		virtual void showValue();
		void show();
};
void B::show(){
	cout << "show function of class B();" << endl;
	showValue();
}
void B::showValue(){
	cout << "showValue function of class B()" << endl;
}
class C : public A {
	private:
		int privateC;
	public:
		virtual void showValue();
		void show();
};
void C::show(){
	cout << "show function of class C()" << endl;
	showValue();
}
void C::showValue(){
	cout << "showValue of class C()" << endl;
}

int main(){
	A *arr[4] = {new C(), new B(), new B(), new C()};
	for(int i = 0; i < 4; i++){
		arr[i]->showValue();
	}
	return 0;
}

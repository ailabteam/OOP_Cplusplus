#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		Diem(double x = 0, double y = 0) : x(x), y(y){};
		void xuat();
};

void Diem::xuat() {
	cout << x << ", " << y << endl;
}

class TG {
	private:
		Diem A, B, C;
	public:
		TG(Diem A, Diem B, Diem C) :
			A(A), B(B), C(C){};
		void xuat();
};

void TG::xuat() {
	A.xuat(); B.xuat(); C.xuat();
}

int main(){
	TG t(Diem(3, 4), Diem (5, 6), Diem (9, 0) );
	t.xuat();
	return 0;
}









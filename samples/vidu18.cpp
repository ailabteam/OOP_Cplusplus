#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Khoitao();
		void Khoitao(double xx);
		void Khoitao(double xx, double yy);
		void Xuat();
};
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}
void Diem::Khoitao(double xx, double yy){
	x = xx;
	y = yy;
}
void Diem::Khoitao(double xx){
	x = xx;
	y = 0;
}
void Diem::Khoitao(){
	x = 0;
	y = 0;
}

int main(){
	Diem p, p1, p2;
	p.Khoitao();
	p1.Khoitao(3);
	p2.Khoitao(4, 5);
	p.Xuat();
	p1.Xuat();
	p2.Xuat();
	
	return 0;
}

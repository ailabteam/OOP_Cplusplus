#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Khoitao(double xx, double yy);
		void Nhap();
		void Xuat();
		void Dichuyen(double dx, double dy);
};
void Diem::Dichuyen(double dx, double dy){
	x += dx;
	y += dy;
}
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}
void Diem::Nhap(){
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
}
void Diem::Khoitao(double xx, double yy){
	x = xx;
	y = yy;
}

int main(){
	Diem d;
	d.Khoitao(0, 0);
	d.Xuat();
	d.Dichuyen(3, -5);
	d.Xuat();
	
	Diem p;
	p.Nhap();
	p.Xuat();
	p.Dichuyen(3, -3);
	p.Xuat();
	
	return 0;
}





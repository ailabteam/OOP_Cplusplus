#include "iostream"
#include "math.h"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		void Khoitao(double x = 0, double y = 0);
		double kc(Diem u);
		double chuvi(Diem u, Diem v);
		double dientich(Diem u, Diem v);
};
double Diem::dientich(Diem u, Diem v){
	double p = this->chuvi(u, v) / 2;
	double a = this->kc(u);
	double b = u.kc(v);
	double c = v.kc(*this);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double Diem::chuvi(Diem u, Diem v){
	double canh1 = this->kc(u);
	double canh2 = u.kc(v);
	double canh3 = v.kc(*this);
	return canh1 + canh2 + canh3;
}
double Diem::kc(Diem u){
	return sqrt(pow(u.x - x, 2) + pow(u.y - y, 2));
}
void Diem::Khoitao(double x, double y){
	this->x = x;
	this->y = y;
}
void Diem::Xuat(){
	cout << this->x << ", " << this->y << endl;
}

int main(){
	Diem p1, p2, p3;
	p1.Khoitao();
	p2.Khoitao(3, 0);
	p3.Khoitao(0, 4);
	cout << p1.chuvi(p2, p3) << endl;
	cout << p1.dientich(p2, p3) << endl;
	return 0;
}





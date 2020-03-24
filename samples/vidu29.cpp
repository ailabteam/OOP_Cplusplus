#include "iostream"
#include "math.h"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void xuat();
		Diem(double x = 0, double y = 0) : x (x), y(y){};
		Diem(Diem &u);
		double kc(Diem u);
		Diem dx();
};
Diem Diem::dx(){
	this->x *= 1;
	this->y *= -1;
	return *this;
}
double Diem::kc(Diem u){
	return sqrt(pow(x - u.x, 2) + pow(y - u.y, 2));
}
Diem::Diem(Diem &u){
	cout << "ham thiet lap sao chep " << endl;
	this->x = u.x;
	this->y = u.y;
}
void Diem::xuat(){
	cout << x << ", " << y << endl;
}
int main(){
	Diem p1;
	Diem p2 (1, 1);
	double res = p1.kc(p2);
	cout << res << endl;
	Diem p3; p3 = p2.dx();
	p3.xuat();
	p2.xuat();
	return 0;
}




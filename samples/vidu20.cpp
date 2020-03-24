#include "iostream"
#include "math.h"

using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		void Khoitao(double xx = 0, double yy = 0);
		int checkTrung(Diem u);
		double kc(Diem u);
};
double Diem::kc(Diem u){
	return sqrt(pow(u.x - x, 2) + pow(u.y - y, 2));
}
int Diem::checkTrung(Diem u){
	if(u.x == x && u.y == y) return 1;
	return 0;
}
void Diem::Khoitao(double xx, double yy){
	x = xx;
	y = yy;
}
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}

int main(){
	Diem p1, p2;
	p1.Khoitao();
	p2.Khoitao(1, 2);
	if(p1.checkTrung(p2)){
		cout << "trung nhau" << endl;
	}
	else {
		cout << "khong trung" << endl;
		cout << p1.kc(p2) << endl;
	}
	
	return 0;
}




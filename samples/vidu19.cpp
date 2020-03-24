#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		void Khoitao(double xx = 0, double yy = 0);
};
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}
void Diem::Khoitao(double xx, double yy){
	x = xx;
	y = yy;
}
int main(){
	Diem p;
	p.Khoitao(4, 9);
	p.Xuat();
	return 0;
}

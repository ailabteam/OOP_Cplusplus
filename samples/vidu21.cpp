#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		Diem DoixungOX();
		void Khoitao(double xx = 0, double yy = 0);
		
};
void Diem::Khoitao(double xx, double yy){
	x = xx;
	y = yy;
}
Diem Diem::DoixungOX(){
	Diem res;
	res.Khoitao(x, -y);
	return res;
}
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}
int main(){
	Diem p1;
	p1.Khoitao(1, 2);
	Diem p2 = p1.DoixungOX();
	p1.Xuat();
	p2.Xuat();
	
	return 0;
}

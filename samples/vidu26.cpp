#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		Diem(double x = 0, double y = 0) : x(x), y(y){};
};
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}

int main(){
	Diem p(3, 4);
	p.Xuat();
	Diem *p1 = &p;
	p1->Xuat();
	
	Diem *p2 = new Diem(3, 6);
	p2->Xuat();
	delete p2;	
	return 0;
}




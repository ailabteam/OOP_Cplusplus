#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		//Diem(double x, double y) : x(x), y(y){};
		//Diem(); // ham dung ko co tham so
		//Diem(double x);
		//Diem(double x, double y);
		Diem(double x = 0, double y = 0) : x(x), y(y){};
};
/*
Diem::Diem(double x, double y){
	this->x = x;
	this->y = y;
}
Diem::Diem(double x){
	this->x = x;
	this->y = 0;
}
Diem::Diem(){
	this->x = 0;
	this->y = 0;
}
*/
void Diem::Xuat(){
	cout << x << ", " << y << endl;
}

int main(){
	Diem p(3, 8);
	p.Xuat();
	
	Diem p1;
	p1 = p;
	p1.Xuat();
	
	return 0;
}

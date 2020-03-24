#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		void Khoitao(double x = 0, double y = 0);
};
void Diem::Xuat(){
	cout << this->x << ", " << this->y << endl;
}
void Diem::Khoitao(double x, double y){
	this->x = x;
	this->y = y;
}
int main(){
	Diem p1;
	p1.Khoitao(3);
	p1.Xuat();
	return 0;
}

#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		void Xuat();
		Diem(double x = 0, double y = 0);
		~Diem();
		
};
Diem::~Diem(){
	cout << "huy" << endl;
}
Diem::Diem(double x, double y){
	this->x = x;
	this->y = y;
}
void Diem::Xuat(){
	cout << x << " " << y << endl;
}

int main(){
	Diem p(3, 4);
	p.Xuat();
	
	Diem *p1 = new Diem(6, 4);
	p1->Xuat();
	delete p1;
	
	return 0;
}








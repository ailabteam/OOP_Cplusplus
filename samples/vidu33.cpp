#include "iostream"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		Diem(double x = 0, double y = 0) : x (x), y (y) {};
		bool trung(Diem u); // ham thanh vien cua lop
		friend bool trung(Diem u, Diem v);
};
bool trung(Diem u, Diem v) {
	if(u.x == v.x && u.y == v.y) return true;
	return false;
}
bool Diem::trung(Diem u){
	if(this->x == u.x && this->y == u.y) return true;
	return false;
}

int main(){
	Diem p1(3);
	Diem p2(3, 9);
	cout << p1.trung(p2) << endl;
	cout << trung(p1, p2) << endl;	
	return 0;
}





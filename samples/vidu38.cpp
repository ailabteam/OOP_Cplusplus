#include "iostream"
using namespace std;

class sp {
	private:
		double a, b;
	public:
		sp(double a = 0, double b = 0) : a(a), b(b){};
		void xuat();
		sp operator+(sp u);
		void operator-();
		friend sp operator+(double d, sp u);
};

sp operator+(double d, sp u){
	sp res (d + u.a, u.b);
	return res;	
}
void sp::operator-(){
	this->a *= -1;
	this->b *= -1;
}
sp sp::operator+(sp u){
	sp res (this->a + u.a, this->b + u.b);
	return res;
}

void sp::xuat() {
	cout << a << " + " << b << "i" << endl;
}


int main(){
	sp p1(1, 2);
	p1.xuat();
	
	sp p2 (3, -1);
	p2.xuat();
	
	sp p3 = p1 + p2;
	p3.xuat();
	
	-p3;
	p3.xuat();
	
	sp p4 = 3 + p3;
	p4.xuat();
	
	return 0;
}







#include "iostream"
using namespace std;

class sp {
	private:
		double a, b;
	public:
		sp(double a = 0, double b = 0) : a (a), b(b){};
		friend istream& operator>>(istream &is, sp &u);
		friend ostream& operator<<(ostream &os, sp u);
};
ostream& operator<<(ostream &os, sp u){
	os << u.a << " + " << u.b << "i" << endl;
	return os;
}
istream& operator>>(istream &is, sp &u){
	is >> u.a >> u.b;
	return is;
}
int main(){
	sp p1;
	cin >> p1;
	cout << p1;
	return 0;
}

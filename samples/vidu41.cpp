#include "iostream"
using namespace std;

class sp {
	private:
		double a, b;
	public:
		sp(double a = 0, double b = 0) : a (a), b(b){};
		operator double();
};

sp::operator double(){
	return a;
}

int main(){
	sp p(5.12, 4);
	double n = p;
	cout << n << endl;
	
	return 0;
}

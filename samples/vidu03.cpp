#include "iostream"
using namespace std;

int main(){
	int n = 10;
	int &r = n;
	cout << n << " " << r << endl;
	r += 10;
	cout << n << " " << r << endl;
	n += 10;
	cout << n << " " << r << endl;
	
	return 0;
}

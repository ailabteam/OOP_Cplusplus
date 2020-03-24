#include "iostream"
using namespace std;

int main(){
	int n = 10;
	const int &r = n;
	cout << n << " " << r << endl;
	
	n += 10;
	cout << n << " " << r << endl;
	
	r += 10;
	
	return 0;
}

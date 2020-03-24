#include "iostream"
using namespace std;

// prototype
void f(int a, int b = 0);

int main(){
	f(4);
	
	return 0;
}

void f(int a, int b){
	cout << a + b << endl;
}

#include "iostream"
using namespace std;

void f(int a, int b = -1);

int main(){
	f(3);
	return 0;
}

void f(int a, int b){
	cout << a + b << endl;
}

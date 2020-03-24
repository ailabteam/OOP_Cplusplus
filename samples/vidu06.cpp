#include "iostream"
using namespace std;

int x;
int& get();


int main(){
	get() = 10;
	cout << x << endl;
	return 0;
}

int& get(){
	return x;
}


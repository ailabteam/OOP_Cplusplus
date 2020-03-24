#include "iostream"
using namespace std;

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	int *p = new int [n];
	for(int i = 0; i < n; i++){
		cin >> p[i];
	}
	for(int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
	delete []p;
	p = NULL;
	
	return 0;
}

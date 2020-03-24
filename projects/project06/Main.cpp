#include "diem.h"

int main(){
	Diem p1;
	cin >> p1;
	cout << p1;
	p1.dichuyen(1, 1);
	cout << p1;
	
	Diem p2; cin >> p2;
	p1 += p2;
	cout << p1;
	
	Diem p3 = p1 + p2;
	cout << p3;
	
	return 0;
}

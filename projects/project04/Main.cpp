#include "diem.h"

int main(){
	Diem p1; cin >> p1;
	Diem p2; cin >> p2;
	
	cout << p1.kc(p2) << endl;
	Diem p3 = p1 + p2;
	cout << p3;
	
	p1 += p2;
	cout << p1;
	
	return 0;
}

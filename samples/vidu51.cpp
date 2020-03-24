#include "iostream"
using namespace std;

template <class T>
T myabs(T x){
	return x > 0 ? x : (-x);
}

template <class T>
T Max(T a, T b){
	return a > b ? a : b;
}

int main(){
	cout << myabs(4) << endl;
	cout << myabs(-3.45) << endl;
	
	cout << Max(3, 5) << endl;
	cout << Max(-3.9, 4.1) << endl;
	cout << Max('a', 'b') << endl;
	return 0;
}

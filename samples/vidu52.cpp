#include "iostream"
using namespace std;

template <class T> 
T Myabs(T x) {
	return x > 0 ? x : (-x);
}

template <class T>
T Max(T a, T b){
	return a > b ? a : b;
}

int main(){
	cout << Myabs(4) << endl;
	cout << Myabs(-3.4) << endl;
	
	cout << Max(3, 9) << endl;
	cout << Max(3.4, -8.1) << endl;
	cout << Max('d', 't') << endl;
	
	return 0;
}

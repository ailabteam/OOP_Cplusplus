#include "iostream"
using namespace std;

// prototype
int min(int a, int b);
int min(int a, int b, int c);
char min(char a, char b);
float min(float a, float b);
int min(int a[], int n);

int main(){
	int a = 3, b = 4;
	cout << min(a, b) << endl;
	double d1 = 3.41, d2 = 4.221;
	cout << min(d1, d2) << endl;
	
	int t[4] = {1, 2, 0, 65};
	cout << min(t, 4) << endl;
	
	return 0;
}

int min(int a, int b){
	return a < b ? a : b;
}
int min(int a, int b, int c){
	return min(a, min(b, c));
}
char min(char a, char b){
	return a < b ? a : b;
}
float min(float a, float b){
	return a < b ? a : b;
}
int min(int a[], int n){
	int res = a[0];
	for(int i = 0; i < n; i++) res = min(res, a[i]);
	return res;
}

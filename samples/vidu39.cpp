#include "iostream"
using namespace std;

class mang1chieu {
	private:
		int n;
		int *a;
	public:
		mang1chieu(int n = 0);
		void xuat();
		void nhap();
		~mang1chieu();
		mang1chieu& operator=(mang1chieu &u); // phep gan
		mang1chieu(mang1chieu &u); // phep sao chep
};
mang1chieu::mang1chieu(mang1chieu &u){
	cout << "phep sao chep" << endl;
	this->n = u.n;
	this->a = new int [n];
	for(int i = 0; i < n; i++){
		this->a[i] = u.a[i];
	}
}
mang1chieu& mang1chieu::operator=(mang1chieu &u){
	cout << "phep gan" << endl;
	this->n = u.n;
	this->a = new int [n];
	for(int i = 0; i < n; i++){
		this->a[i] = u.a[i];
	}
	return *this;
}
void mang1chieu::nhap() {
	if(n == 0) {
		cin >> n;
		a = new int [n];
	}
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
mang1chieu::~mang1chieu() {
	delete []a;
	a = NULL;
}
void mang1chieu::xuat(){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
mang1chieu::mang1chieu(int n){
	this->n = n;
	if(n == 0) a = NULL;
	else {
		a = new int [n];
	}
}


int main(){
	mang1chieu m(2);
	m.nhap();
	m.xuat();
	
	
	mang1chieu m1;
	m1 = m; // phep gan
	m1.xuat();
	
	mang1chieu m2 = m; // phep sao chep
	m2.xuat();
	
	return 0;
}




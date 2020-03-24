#include "iostream"
using namespace std;

class mang1chieu {
	private:
		int n;
		int *a;
	public:
		mang1chieu(int n = 0);
		~mang1chieu();
		void nhap();
		void xuat();
		mang1chieu(mang1chieu &u);
};
mang1chieu::mang1chieu(mang1chieu &u){
	cout << "ham thiet lap sao chep" << endl;
	this->n = u.n;
	this->a = new int [n];
	for(int i = 0; i < n; i++){
		this->a[i] = u.a[i];
	}
}
void mang1chieu::nhap(){
	if(n == 0){
		cin >> n;
		a = new int [n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
	}
	else {
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
	}
}
mang1chieu::~mang1chieu(){
	delete []a;
	a = NULL;
}
mang1chieu::mang1chieu(int n){
	if(n == 0){
		this->n = n;
		a = NULL;
	}
	else {
		this->n = n;
		a = new int [n];
	}
}
void mang1chieu::xuat(){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	mang1chieu m(2);
	m.nhap();
	m.xuat();
	
	mang1chieu m1 = m;
	m1.xuat();
		
	return 0;
}



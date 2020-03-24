#include "iostream"
using namespace std;

class Mang1Chieu {
	private:
		int n;
		int *a;
	public:
		Mang1Chieu(int n = 0);
		~Mang1Chieu();
		void Nhap();
		void Xuat();
};
void Mang1Chieu::Nhap(){
	if(n == 0) {
		cin >> n;
		a = new int [n];
	}
	for(int i = 0; i < n; i++) cin >> a[i];
}
Mang1Chieu::~Mang1Chieu(){
	cout << "goi ham huy" << endl;
	delete []a;
	a = NULL;
}
Mang1Chieu::Mang1Chieu(int n){
	this->n = n;
	if(n == 0) a = NULL;
	else {
		a = new int [n];
	}
}
void Mang1Chieu::Xuat(){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	Mang1Chieu m(3);
	m.Nhap();
	m.Xuat();	
	return 0;
}





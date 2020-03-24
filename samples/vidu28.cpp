#include "iostream"
using namespace std;

class matran {
	private:
		int m, n;
		int **a;
	public:
		matran(int m = 0, int n = 0);
		~matran();
		void xuat();
		void nhap();
};
void matran::nhap(){
	if(m > 0 && n > 0){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
	}
	else {
		cin >> m >> n;
		a = new int *[m];
		for(int i = 0; i < m; i++) {
			a[i] = new int [n];
		}
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		
	}
}
matran::~matran(){
	for(int i = 0; i < m; i++){
		delete []a[i];
	}
	delete []a;
	a = NULL;
}
matran::matran(int m, int n){
	if(m > 0 && n > 0){
		this->m = m;
		this->n = n;
		a = new int *[m];
		for(int i = 0; i < m; i++){
			a[i] = new int [n];
		}
	}
	else {
		this->m = m;
		this->n = n;
		a = NULL;
	}
}
void matran::xuat(){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n ;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	matran m(3, 2);
	m.nhap();
	m.xuat();
	
	return 0;
}








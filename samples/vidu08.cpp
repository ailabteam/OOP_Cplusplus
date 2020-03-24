#include "iostream"
using namespace std;

struct PS {
	int ts;
	int ms;
};

// prototype
void Nhap(PS &u);
void Xuat(PS u);
int UCLN(int a, int b);
void RutGon(PS &u);
PS operator+(PS u, PS v);
PS operator-(PS u, PS v);
PS operator*(PS u, PS v);
PS operator/(PS u, PS v);


int main(){
	PS a, b;
	Nhap(a);
	Nhap(b);
	
	Xuat(a);
	Xuat(b);
	
	PS c = a / b;
	Xuat(c);
	
	return 0;
}


PS operator/(PS u, PS v){
	PS res;
	res.ts = u.ts * v.ms;
	res.ms = u.ms * v.ts;
	RutGon(res);
	return res;
}
PS operator*(PS u, PS v){
	PS res;
	res.ts = u.ts * v.ts;
	res.ms = u.ms * v.ms;
	RutGon(res);
	return res;
}

PS operator-(PS u, PS v){
	PS res;
	res.ts = u.ts * v.ms - u.ms * v.ts;
	res.ms = u.ms * v.ms;
	RutGon(res);
	return res;	
}

PS operator+(PS u, PS v){
	PS res;
	res.ts = u.ts * v.ms + u.ms * v.ts;
	res.ms = u.ms * v.ms;
	RutGon(res);
	return res;	
}
void RutGon(PS &u){
	int tmp = UCLN(u.ts, u.ms);
	u.ts /= tmp;
	u.ms /= tmp;
}

int UCLN(int a, int b){
	if(b == 0) return a;
	return UCLN(b, a % b);
}

void Xuat(PS u){
	cout << u.ts << "/" << u.ms << endl;	
}
void Nhap(PS &u){
	cout << "Nhap vao tu so: "; cin >> u.ts;
	cout << "Nhap vao mau so: "; cin >> u.ms;
}



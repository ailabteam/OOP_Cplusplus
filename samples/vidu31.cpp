#include "iostream"
using namespace std;

class SV {
	private:
		string masv;
		string hoten;
		double diem;
	public:
		SV(string masv = "", string hoten = "", double diem = 0) :
			masv(masv), hoten(hoten), diem(diem){};
		void xuat();
		string getMasv();
};

string SV::getMasv(){
	return masv;
}
		

class Lop {
	private:
		const int spt;
		int n;
		SV *a;
	public:
		Lop(int t) : spt(t) {
			a = new SV [spt];
		}
		void TimkiemSV(string masv) const;
		void f();
		
};
void Lop::f(){
	n = 9;
	cout << "fds" << endl;
}
void Lop::TimkiemSV(string masv) const {
	SV res;
	for(int i = 0; i < spt; i++){
		if(masv == a[i].getMasv()){
			res = a[i];
			break;
		}
	}
	res.xuat();
}


void SV::xuat(){
	cout << masv << endl;
	cout << hoten << endl;
	cout << diem << endl;
}

int main(){
	const Lop l(2);
	l.TimkiemSV("t");
	
	return 0;
}





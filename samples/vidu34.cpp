#include "iostream"
using namespace std;

class TOM {
	private:
		int secretTOM;
	public:
		TOM(int t = 0) : secretTOM(t){};
		void xuat();
		friend class JERRY;
};
void TOM::xuat() {
	cout << secretTOM << endl;
}

class JERRY {
	private:
		int secretJERRY;
	public:
		JERRY(int t) : secretJERRY(t) {};
		void xuat();
		void change(TOM &t);
		
};
void JERRY::change(TOM &t){
	t.secretTOM = 99;
}
void JERRY::xuat(){
	cout << secretJERRY << endl;
}

int main(){
	TOM t(4);
	t.xuat();
	
	JERRY j(5);
	j.xuat();
	j.change(t);
	t.xuat();
	
	return 0;
}

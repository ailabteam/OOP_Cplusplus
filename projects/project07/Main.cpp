#include "person.h"
#include "student.h"
#include "teacher.h"
#define maxn 100

int main(){
	Person *ds [maxn];
	int cnt = 0;
	do {
		string hoten;
		getline(cin, hoten);
		fflush(stdin);
		char c;
		cout << "Giang vien (G), Sinh vien (S): "; cin >> c;
		if(c == 'G' || c == 'g'){
			int sobb; 
			cout << "nhap so bai bao: "; cin >> sobb;
			ds[cnt++] = new Teacher(hoten, sobb);
		}
		else {
			double diemTB;
			cout << "nhap diem trung binh: "; cin >> diemTB;
			ds[cnt++] = new Student(hoten, diemTB);
		}
		
		char choice;
		cout << "tiep (Y), dung (N): "; cin >> choice;
		if(choice == 'N' || choice == 'n' || cnt >= maxn) break;
		fflush(stdin);
	}while(true);
	
	for(int i = 0; i < cnt; i++){
		ds[i]->Xuat();
		if(ds[i]->DuocKhenThuong()){
			cout << " duoc khen thuong" << endl;
		}
	}
	
	
	return 0;
}

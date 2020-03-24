#include "teacher.h"

Teacher::Teacher(string hoten, int sobb) : Person(hoten){
	this->sobb = sobb;
}
int Teacher::DuocKhenThuong() const {
	return this->sobb >= 5;
}
void Teacher::Xuat() const{
	cout << "ho ten: " << hoten << endl;
}

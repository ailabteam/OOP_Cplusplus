#include "teacher.h"

GiangVien::GiangVien (string hoten, int sobb) : Nguoi(hoten){
	this->sobb = sobb;
}

int GiangVien::DuocKhenThuong() const {
	return this->sobb >= 5;
}
void GiangVien::Xuat() const{
	cout << "giang vien: " << hoten << endl;
}

#include "student.h"

SinhVien::SinhVien(string hoten, double diemTB) : Nguoi(hoten) {
	this->diemTB = diemTB;
}

int SinhVien::DuocKhenThuong() const{
	return this->diemTB >= 9;
}

void SinhVien::Xuat() const{
	cout << "hoten: " << hoten << endl;
}

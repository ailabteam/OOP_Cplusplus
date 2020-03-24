#include "student.h"

Student::Student(string hoten, double diemTB) : Person(hoten){
	this->diemTB = diemTB;
}

int Student::DuocKhenThuong() const {
	return this->diemTB >= 9;
}
void Student::Xuat() const {
	cout << "hoten: " << hoten << endl;
}

#ifndef STUDENT_H
#define STUDENT_H

#include "nguoi.h"
class SinhVien : public Nguoi {
	private:
		double diemTB;
	public:
		SinhVien(string hoten = "", double diemTB = 0);
		virtual int DuocKhenThuong() const;
		virtual void Xuat() const;
};


#endif

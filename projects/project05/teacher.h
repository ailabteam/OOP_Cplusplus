#ifndef TEACHER_H
#define TEACHER_H

#include "nguoi.h"

class GiangVien : public Nguoi {
	protected:
		int sobb;
	public:
		GiangVien (string hoten = "", int sobb = 0);
		virtual int DuocKhenThuong() const;
		virtual void Xuat() const;
};


#endif

#ifndef teacher_h
#define teacher_h

#include "person.h"

class Teacher : public Person {
	protected:
		int sobb;
	public:
		Teacher(string hoten = "", int sobb = 0);
		virtual int DuocKhenThuong() const;
		virtual void Xuat() const;
};

#endif

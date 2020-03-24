#ifndef student_h
#define studnet_h

#include "person.h"

class Student : public Person {
	protected:
		double diemTB;
	public:
		Student(string hoten = "", double diemTB = 0);
		virtual int DuocKhenThuong() const;
		virtual void Xuat() const;
};


#endif

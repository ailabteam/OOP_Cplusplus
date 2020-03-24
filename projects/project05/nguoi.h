#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Nguoi {
	protected:
		string hoten;
	public:
		Nguoi(string hoten);
		virtual int DuocKhenThuong() const = 0;
		virtual void Xuat() const = 0;
};
#endif


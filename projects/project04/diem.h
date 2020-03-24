#ifndef diem_h
#define diem_h

#include "iostream"
#include "math.h"
using namespace std;

class Diem {
	private:
		double x, y;
	public:
		Diem(double x = 0, double y = 0);
		void dichuyen(double dx, double dy);
		double kc(Diem u);
		friend istream& operator>>(istream &is, Diem &u);
		friend ostream& operator<<(ostream &os, Diem u);
		friend Diem operator+(Diem u, Diem v);
		void operator+=(Diem u);
};

#endif

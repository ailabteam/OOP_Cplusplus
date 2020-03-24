#include "diem.h"

void Diem::dichuyen(double dx, double dy){
	this->x += dx;
	this->y += dy;
}
double Diem::kc(Diem u){
	return sqrt(pow(this->x - u.x, 2) + pow(this->y - u.y, 2));
}
istream& operator>>(istream &is, Diem &u){
	is >> u.x >> u.y;
	return is;
}
ostream& operator<<(ostream &os, Diem u){
	os << u.x << " " << u.y << endl;
	return os;
}
Diem operator+(Diem u, Diem v){
	Diem res (u.x + v.x, u.y + v.y);
	return res;
}
void Diem::operator+=(Diem u){
	this->x += u.x;
	this->y += u.y;
}

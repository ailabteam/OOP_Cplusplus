#include "iostream"
using namespace std;

class Counter {
	private:
		static int n;
		//int n1;
	public:
		Counter() {
			n++;
		}
		~Counter(){
			n--;
		}
		static void Display();
};

int Counter::n = 0;
void Counter::Display(){
	//n1 = 9;
	cout << "hien dang co " << n << " phan tu" << endl;
}

int main(){
	Counter a, b, c, d;
	Counter::Display();
	return 0;
}

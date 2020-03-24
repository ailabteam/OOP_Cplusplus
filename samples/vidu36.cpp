#include "iostream"
using namespace std;

class Counter {
	private:
		static int n;
	public:
		Counter();
		~Counter();
};

Counter::Counter(){
	cout << "khoi tao, co " << ++n << " phan tu" << endl;
}
Counter::~Counter(){
	cout << "ham huy, co " << --n << " phan tu" << endl;
}
int Counter::n = 0; 


int main(){
	Counter a;
	Counter b;
	return 0;
}

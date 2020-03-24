#include "tstack.h"
int main(){
	Stack<char> st(10);
	st.Push('1');
	st.Push('z');
	st.Push('b');
	while(!st.isEmpty()){
		cout << st.Pop() << endl;
	}
	return 0;
}

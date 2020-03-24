#include "tstack.h"

int main(){
	Stack<char> st(10);
	st.Push('a'); st.Push('c'); st.Push('z');
	while(!st.isEmpty()){
		cout << st.Pop() << endl;
	}
	return 0;
}

#include "tstack.h"

int main(){
	Stack<int> st (10);
	int i = 0;
	while(!st.isFull()) {
		st.Push(i + 4);
		i ++;
	}
	
	while(!st.isEmpty()){
		cout << st.Pop() << endl;
	}
	
	return 0;
}

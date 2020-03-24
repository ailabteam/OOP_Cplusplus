#include "tstack.h"

template <class T> 
Stack<T>::Stack(int sz) {
	this->sz = sz;
	this->top = -1;
	this->a = new T[sz];
}

template <class T>
Stack<T>::~Stack(){
	delete [] a;
	a = NULL;
}

template <class T>
bool Stack<T>::isEmpty() const {
	if(top == -1) return true;
	return false;
}

template <class T>
bool Stack<T>::isFull() const {
	if(top == sz - 1) return true;
	return false;
}

template <class T>
void Stack<T>::Push(T item){
	if(!isFull()) {
		a[++top] = item;
	}
}
template <class T>
T Stack<T>::Pop(){
	if(!isEmpty()) return a[top--];
}


template class Stack<int>;
template class Stack<double>;
template class Stack<char>;

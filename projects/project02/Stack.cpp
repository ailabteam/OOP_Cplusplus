#include "tstack.h"

template <class T>
Stack<T>::Stack(int sz){
	this->sz = sz;
	this->top = -1;
	this->a = new T[sz];
}

template <class T>
Stack<T>::~Stack(){
	delete []a;
	a = NULL;
}

template <class T>
bool Stack<T>::isEmpty() const{
	return top == -1;
}

template <class T>
bool Stack<T>::isFull() const{
	return top == sz - 1;
}

template <class T>
void Stack<T>::Push(T item){
	if(!isFull()) {
		top++;
		a[top] = item;
	}
}

template <class T>
T Stack<T>::Pop(){
	if(!isEmpty()) {
		return a[top--];
	}
}

template class Stack<int>;
template class Stack<char>;



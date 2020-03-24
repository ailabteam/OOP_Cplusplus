#ifndef TSTACK_H
#define TSTACK_H

#include "iostream"
using namespace std;

template <class T>
class Stack {
	private:
		int sz;
		int top;
		T *a;
	public:
		Stack(int sz);
		~Stack();
		bool isEmpty() const;
		bool isFull() const;
		void Push(T item);
		T Pop();
};

#endif

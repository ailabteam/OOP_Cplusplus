#include "iostream"
using namespace std;

#ifndef TSTACK_H
#define TSTACK_H

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

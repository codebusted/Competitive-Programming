#include <iostream>

#define MAX 1000

class Stack {
	int top; // stack pointer

public:
	int a[MAX];

	Stack() { top = -1; }

	bool push(int x) {
		if(top >= (MAX - 1)) // stack overflow
			return false;
		else {
			a[++top] = x;
			return true;
		}
	}

	void pop() {
		if(top < 0) // stack underflow
			return;
		else {
			top--;
			return;
		}
	}

	int peek() {
		if (top < 0) // stack empty
			return 0; 
		else {
			int x = a[top];
			return x;
		}
	}

	int size() {
		if (top < 0) {
			return 0;
		}
		return top + 1;
	}

	bool isEmpty() {
		return top < 0;
	}

	void display() {
		if (isEmpty())
			return;
		else {
			std::cout << "Stack Elements: ";
			for(int i=top; i>=0; i--)
      			std::cout << a[i] << " ";
     	 	std::cout << std::endl;
		}
	}

};
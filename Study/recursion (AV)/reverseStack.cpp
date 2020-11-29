#include <iostream>

#include "stackArr.cpp"


void insert(Stack &s, int ele) {
	if(s.size() == 0) {
		s.push(ele);
		return;
	}

	int x = s.peek();
	s.pop();
	insert(s, ele);
	s.push(x);
}

void reverse(Stack &s) {
	if(s.size() <= 1)
		return;
	else {
		int temp = s.peek();
		s.pop();
		reverse(s);
		insert(s, temp);
	}
	return;
}


int main(int argc, char const *argv[])
{
	Stack s;

	int sizeStack = 6;
	int temp;
	for(int i = 0; i < sizeStack; i++) {
		std::cin >> temp;
		s.push(temp);
	}

	reverse(s);

	s.display();

	return 0;
}
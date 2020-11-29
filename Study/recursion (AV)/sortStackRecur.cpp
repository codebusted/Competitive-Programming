#include <iostream>

#include "stackArr.cpp"

void insert(Stack &s, int temp) {
	if(s.isEmpty() || s.peek() <= temp) {
		s.push(temp);
		return;
	}
	int x = s.peek();
	s.pop();
	insert(s, temp);
	s.push(x);
}

void sort(Stack &s) {
	if(s.isEmpty())
		return;
	else {
		int temp = s.peek();
		s.pop();
		sort(s);
		insert(s, temp);
	}
}

int main(int argc, char const *argv[])
{
	Stack s;

	int sizeStack = 5;
	int temp;
	for(int i = 0; i < sizeStack; i++) {
		std::cin >> temp;
		s.push(temp);
	}

	sort(s);

	s.display();

	return 0;
}
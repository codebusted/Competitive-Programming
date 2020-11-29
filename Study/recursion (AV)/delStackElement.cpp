#include <iostream>

#include "stackArr.cpp"

void solve(Stack &s, int k) {
	if(k == 1) {
		s.pop();
		return;
	}
	int temp = s.peek();
	s.pop();
	solve(s, k - 1);
	s.push(temp);

	return;
} 

void delMid(Stack &s) {
	if(s.size() == 0)
		return;
	// mid element of stack
	int k = s.size() / 2 + 1;
	solve(s, k);
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

	delMid(s);

	s.display();


	return 0;
}
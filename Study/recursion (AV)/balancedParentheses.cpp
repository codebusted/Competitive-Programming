
// balanced parentheses (good question)
#include <iostream>
#include <string>

void solve(int open, int closed, std::string op) {
	if(closed == 0) {
		std::cout << op << std::endl;
		return;
	}

	if(open > 0) {
		std::string op1 = op;
		op1.push_back('(');
		solve(open - 1, closed, op1);
	}
	if(closed > open) {
		std::string op2 = op;
		op2.push_back(')');
		solve(open, closed - 1, op2);
	}

	return;
	
}

void balancedParentheses(int n) {
	int open = n, closed = n;
	std::string op = "";

	solve(open, closed, op);
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	
	balancedParentheses(n);


	return 0;
}
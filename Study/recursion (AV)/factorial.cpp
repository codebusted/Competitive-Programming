
// beginner recursion problem
#include <iostream>

using namespace std;

int factorial(int n) {
	if(n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
	int n = 3;
	int res = factorial(n);
	cout << res << endl;
	return 0;
}
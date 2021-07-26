
#include <iostream>

/* using EUCLIDEAN ALGORITHM

> GCD of two numbers doesn’t change if 
smaller number is subtracted from a bigger number.

int gcd(int  a, int b) {
	if(a == 0)
		return b;
	if(b == 0)
		return a;


	if(a == b)
		return a;

	if(a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

> Now instead of subtraction, if we divide smaller number, 
the algorithm stops when we find remainder 0.

time complexity = O(log(min(a, b)))
*/
int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	int n1, n2;
	std::cin >> n1;
	std::cin >> n2;

	int res = gcd(n1, n2);
	std::cout << res << std::endl;

	return 0;
}
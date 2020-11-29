
#include <iostream>


void solve(int s, int d, int h, int n) {
	if (n == 1 ) {
		std::cout << "Move disk " << n <<  " from " << s << " to " << d << std::endl;
		return;
	}
	// n-1 s -> h, taking help of destination
	solve(s, h, d, n-1);
	std::cout << "Move disk " << n << " from " << s << " to " << d << std::endl;
	// n-1, h -> d, taking help of source
	solve(h, d, s, n-1);
	return;
}

int main(int argc, char const *argv[])
{
	int s = 1, h = 2, d = 3;
	int n;
	std::cin >> n;
	solve(s, d, h, n);

	return 0;
}
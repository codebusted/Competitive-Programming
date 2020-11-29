#include <iostream>
#include <cmath>

using namespace std;

void solve(int s, int d, int h, int n) {
	if (n == 1 ) {
		std::cout << "move disk " << n <<  " from rod " << s << " to rod " << d << std::endl;
		return;
	}
	// n-1 s -> h, taking help of destination
	solve(s, h, d, n-1);
	std::cout << "move disk " << n << " from rod " << s << " to rod " << d << std::endl;
	// n-1, h -> d, taking help of source
	solve(h, d, s, n-1);
	return;
}


int main() {
	//code
	int s = 1, h = 2, d = 3;
	int t;
	std::cin >> t;
	int n;
	for(int i = 0; i < t; i++) {
	
    	std::cin >> n;
    	solve(s, d, h, n);
    	int steps = pow(2, n) - 1;
    	std::cout << steps << std::endl;
	}
	
	return 0;
}
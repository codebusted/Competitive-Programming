#include <iostream>
#include <cmath>

int solve(int n, int k) {
	if(n == 1 && k == 1)
		return 0;
	int mid = pow(2, n - 1) / 2;
	if(k <= mid)
		return solve(n - 1, k);
	else
		return !solve(n - 1, k - mid);
}

void kthSymbol(int n, int k) {
	if(k > pow(2, n - 1)) {
		std::cout << "Invalid k value!" << std::endl;
		return;
	}
	int res = solve(n, k);
	std::cout << "Result: " << res << std::endl;
	return;
}

int main(int argc, char const *argv[])
{
	int n, k;

	std::cout << "N: ";
	std::cin >> n;
	std::cout << std::endl;
	std::cout << "k: ";
	std::cin >> k;
	std::cout << std::endl;

	kthSymbol(n, k);

	return 0;
}
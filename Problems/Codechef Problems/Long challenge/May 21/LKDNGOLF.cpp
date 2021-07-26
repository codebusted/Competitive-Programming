
#include <iostream>

void golf(int n, int x, int k) {
	for(int i = 0; i <= n+1; i+=k) {
		if(i == x) {
			std::cout << "YES" << std::endl;
			return;
		}
	}
	for(int i = n+1; i >= 0; i-= k) {
		if(i == x) {
			std::cout << "YES" << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
	return;
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	int n, x, k;
	while(t--) {
		std::cin >> n >> x >> k;
		if(x % k == 0 || (n+1-x) % k == 0)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;

		//golf(n, x, k); // O(n**2)
	}
	return 0;
}
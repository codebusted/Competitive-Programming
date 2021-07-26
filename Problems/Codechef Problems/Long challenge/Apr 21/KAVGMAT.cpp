
#include <iostream>
#include <array>

#ifndef LOG
#define LOG(x) std::cout << x << std::endl
#endif

int modify(int n, int m, int k, int *arr) {
	int res = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			std::cout << &arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int t, n, m, k;
	std::cin >> t;
	while(t--) {
		std::cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++)
				std::cin >> a[i][j];
		}

		/*for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				std::cout << a[i][j] << ' ';
			}
			std::cout << std::endl;
		}*/

		LOG(modify(n, m, k, &a[n][m]));
	}
	return 0;
}
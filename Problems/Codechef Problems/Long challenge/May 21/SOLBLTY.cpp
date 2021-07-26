#include <iostream>

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	int x, a, b, res;
	while(t--) {
		std::cin >> x >> a >> b;
		res = (((100-x)*b) + a)*10;
		std::cout << res << std::endl;
	}
	return 0;
}
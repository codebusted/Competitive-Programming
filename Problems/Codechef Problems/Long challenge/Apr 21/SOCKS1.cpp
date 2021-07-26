#include <iostream>

int main(int argc, char const *argv[])
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if(a == b || b == c || a == c)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "NO" << std::endl;


	return 0;
}
#include <iostream>

#ifndef LOG
#define LOG(x) std::cout << x << std::endl;
#endif

int main(int argc, char const *argv[])
{
	int a = 10;
	int* p = &a;
	LOG(p);

	// addition
	LOG(p + 1); // since 'p' is a integer pointer, when incremented by one unit, it points to next integer, 4 bytes

	LOG(*p); // value of 'a'
	LOG(*(p+1)); // garbage value


	// subtraction
	

	return 0;
}
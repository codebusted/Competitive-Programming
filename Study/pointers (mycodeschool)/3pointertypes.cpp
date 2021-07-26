
/*
> pointer for all datatypes are integer addresses
> datatypes in pointers just tells us what kind of data is stored at that memory address, helpful for derefrencing
*/

#include <iostream>

#ifndef LOG
#define LOG(x) std::cout << x << std::endl;
#endif

int main(int argc, char const *argv[])
{
	int a = 1025; // int (4 bytes) = 00000000 00000000 00000100 00000001
	int* p = &a;
	std::cout << "Size of int is: " << sizeof(int) << std::endl;
	std::cout << "address= " << (int)p << " value= " << *p  << std::endl;

	char* p2 = (char *)&a;
	std::cout << "Size of int is: " << sizeof(char) << std::endl;
	std::cout << "address= " << (int)p2 << " value= " << (int)*p2  << std::endl;

	// void pointer
	void *p3;
	p3 = &a;
	std::cout << "address= " << (int)p3 << std::endl;

	return 0;
}
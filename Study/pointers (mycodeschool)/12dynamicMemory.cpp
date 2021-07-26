#include <iostream>

int main(int argc, char const *argv[])
{
	int *p;
	p = new int; // dynamic memory allocation
	// note- no typecasting is required in cpp
	*p = 10;
	delete p; // clears the block of memory pointed by p

	p = new int[10]; // continuous block of memory of 10 int size
	delete[] p;

	return 0;
}
#include <iostream>

/*
POINTER -> pointer is a variable that stores memory address of another variable
> pointer for all datatypes are integer addresses
> datatypes in pointers just tells us what kind of data is stored at that memory address, helpful for derefrencing
*/

#ifndef LOG
#define LOG(x) std::cout << x << std::endl;
#endif

int main(int argc, char const *argv[])
{
	void* ptr = nullptr; // typeless pointer having memory address 0 (0 is arbitrary address)
	LOG(ptr);

	int a = 5;
	int* p; // declare a pointer variable
	p = &a; // assigning variable to a pointer
	// '&' gives the address of the memory location of the variable(a) pointed by pointer 'p'
	
	LOG(p); // gives address of 'a'
	LOG(&a); // '&' gives address of 'a'

	LOG(*p); // derefrencing -> gives value stored at address pointed by 'p' i.e. value of 'a'

	LOG(&p); // gives the address of pointer 'p'

	*p = 8; // '*p' is value stored at address pointed by p i.e. value of variable 'a' changed to 8
	LOG(a);



	int b = 10;
	*p = b; // value stored at address pointed by 'p' is changed to value of b 
	LOG(p); // 'p' still stores the address of 'a'

	p = &b; // now 'p' points to variable 'b'
	LOG(p);

	return 0;
}
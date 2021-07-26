#include <stdio.h>
#include <stdlib.h> // malloc()

int main(int argc, char const *argv[])
{
	int a; // static memory allocation
	int *p;
	p = (int*)malloc(sizeof(int)); // dynamic memory allocation
	// malloc returns void pointer which stores starting address of the argument
	*p = 10; // 10 gets stored in the heap memory
	free(p); // clears memory

	p = (int*)malloc(20*sizeof(int)); // continuous block of memory for 20 integer gets allocated in the heap
	// p stores the base address of this block
	p[0] = 10;
	*(p+1) = 20;


	return 0;
}
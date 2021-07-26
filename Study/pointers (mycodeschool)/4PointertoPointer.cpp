#include <iostream>

int main(int argc, char const *argv[])
{
	int x = 5;
	int* p = &x;
	printf("address of x: %d\n", p);
	printf("x: %d\n", *p);

	int** q; // pointer to pointer -> it stores address of a pointer pointing to a variable
	q = &p; // 'q' stores address of 'p'
	printf("p: %d\n", q); 
	// q = &a; not a valid statement. q is a pointer to pointer so it can only store address of pointer
	printf("x: %d\n", *(*q));

	int*** r; // pointer to pointer to pointer
	r = &q;
	printf("q: %d\n", r); // 'r' stores address of 'q'
	printf("x: %d\n", *(*(*r)));


	return 0;
}
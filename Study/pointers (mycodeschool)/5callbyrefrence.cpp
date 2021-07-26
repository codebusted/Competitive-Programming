#include <iostream>

// call by value
void Increment(int a) {
	a++;
	return;
}
// call by refrence
void Increment2(int *p) {
	(*p)++;
	return;
}

int main(int argc, char const *argv[])
{
	int a = 10;
	printf("a = %d\n", a);

	// call by value
	Increment(a);
	printf("a = %d\n", a);

	// call by refrence
	Increment2(&a);
	printf("a = %d\n", a);

	return 0;
}
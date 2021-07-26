#include <iostream>

/* if we pass array to a function it inplicitely converts it into a pointer variable which only stores the starting address of the array.
 so (int a[]) is equivalent to (int* a)
 so for array there is always call by refrence
*/
void SumOfEle(int a[]) { // SumofEle(int* a)
	int sum = 0;
	int size = sizeof(a) / sizeof(int);
	printf("SOE: size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
	for(int i = 0; i < size; i++) {
		sum += a[i];
	}
	printf("Sum of Elements = %d\n", sum);
}

// we have to pass size to know the number of elements of array
void SumofEle2(int a[], int size) {
	int sum = 0;
	printf("SOE2: size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
	for(int i = 0; i < size; i++) {
		sum += a[i];
	}
	printf("Sum of Elements = %d\n", sum);

	// since the array is passed by refrence if value is modified in called function change is reflected in calling function
	a[1] = 10;
}

int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5};
	int sum = 0;
	int size = sizeof(a) / sizeof(int);
	for(int i = 0; i < size; i++) {
		sum += a[i];
	}
	printf("Main: size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
	printf("Sum of Elements = %d\n", sum);
	SumOfEle(a);
	SumofEle2(a, size);

	// modified value after calling of funciton
	printf("a[1] = %d\n", a[1]);

	return 0;
}
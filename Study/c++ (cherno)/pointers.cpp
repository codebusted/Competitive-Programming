
#include <iostream>
using namespace std;

void Increment(int* value) {
	(*value)++;
}

int main(int argc, char const *argv[])
{
	int a[] = {1, 3, 4, 5, 7};
	int b = 10;
	Increment(&b);
	cout << b << endl;
	/*& ref = b;
	int* q;
	q = &b;
	cout << ref << endl;*/
	return 0;
}
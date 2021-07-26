#include <iostream>

void print(const char* c) { // pointer to the first element of the string
	while(*c != '\0') {
		printf("%c", *c);
		c = c+1; // pointer points to next character
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	//char c[10] = "hello";
	const char* c = "hello"; // string gets stored as constant during compile time in the code memory
							 // pointer c points to that string
							 // can't be modified so we can use const keyword to avoid warning
	print(c);
	return 0;
}
#include <iostream>
#include <cstring> // builtin c string functions

// null character: '\0'
// string is terminated by a null character

int main(int argc, char const *argv[])
{
	char c[10];
	c[0] = 'h';
	c[1] = 'e';
	c[2] = 'l';
	c[3] = 'l';
	c[4] = 'o';
	c[5] = '\0';
	printf("%s\n", c);
	printf("%d\n", sizeof(c));
	printf("%d\n", strlen(c));
	return 0;
}
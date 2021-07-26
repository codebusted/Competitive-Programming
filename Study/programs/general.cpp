

#include <iostream>

#ifndef LOG
#define LOG(x) std::cout << x << std::endl
#endif

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	// finding middle element
	int l = 3;
	int h = 9;
	int mid = l + (h - l) / 2;
	LOG(mid);
	

	// std::pair
	std::pair<int, int> obj(10, 20);
	std::cout << obj.first << ' ' << obj.second << std::endl;

	// append int to a string
	string s = "hello"
	s.append(to_string(1));

	return 0;
}
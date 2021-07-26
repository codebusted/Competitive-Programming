#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int t, d, x, y, z;
	std::cin >> t;
	int workx, workyz;
	while(t--) {
		cin >> d >> x >> y >> z;
		workx = 7*x;
		workyz = d*y + (7-d)*z;
		workx > workyz ? cout << workx << endl : cout << workyz << endl;
	}

	return 0;
}
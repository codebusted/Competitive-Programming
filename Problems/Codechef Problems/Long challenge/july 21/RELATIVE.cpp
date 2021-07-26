#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int t, g, c, h;
	cin >> t;
	while(t--) {
		cin >> g >> c;
		cout << c*c << endl;
		h = (c*c) / (2*g);
		cout << h << endl;
	}
	return 0;
}
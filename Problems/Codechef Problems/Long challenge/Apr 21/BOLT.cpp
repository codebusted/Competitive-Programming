#include <iostream>

#ifndef T
#define T 958
#endif

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	float k1, k2, k3, v, v2, t1;
	int time;
	while(t--) {
		std::cin >> k1 >> k2 >> k3 >> v;

		v2 = k1 * k2 * k3 * v; 
		t1 = float(100/v2);

		t1 = (int)(t1 * 100 + .5); // reserving two decimal by bringing it two the left of decimal point
		time = t1; // carving out the decimal part by storing 't1' in 'time' of int type

		if(time < T)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

/* 
the main part of this is that comparing float values is tricky and using equality operator may give unexpected result
*/
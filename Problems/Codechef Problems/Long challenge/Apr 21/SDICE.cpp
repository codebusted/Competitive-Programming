/* 
dice dimension: 1*1; area: 2*2
Constraints:
1. minimum visible area: dice are arranged layer by layer
2. max pips:
	1- botton
	2, 3- same layer connection
	4- top
	5, 6- outer sides
*/

#include <iostream>

#ifndef ll
#define ll long long
#endif

#ifndef LOG
#define LOG(x) std::cout << x << std::endl;
#endif

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	ll n;
	ll top, top2, top3, sum;
	while(t--) {
		std::cin >> n;
		// top connection
		// top1 = 0;
		top2 = 4; // (2+2)
		top3 = 9; // (2+2) + (3+2)

		sum = 20*n; // 5 faces

		if(sum <= 0) { // invalid case
			LOG(0);
			return 0;
		}

		if(n%4 == 0 || n%4 == 1)
			top = 0;
		else if(n%4 == 2)
			top = top2;
		else if(n%4 == 3)
			top = top3;

		if(n < 4)
			sum -= top;
		else
			sum -= 5*4*(n/4) + top + 4*(4*((n/4)-1) + n%4);

		LOG(sum);
	}

	return 0;
}
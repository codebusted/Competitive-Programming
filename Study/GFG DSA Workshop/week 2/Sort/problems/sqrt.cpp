
#include <iostream>

#ifndef ll
#define ll long long
#endif

class Solution
{
public:
	ll int floorSqrt(ll int x) {
		// using binary search we can make time complexity as O(log(n))
		if(x <= 1)
			return x;
		ll int l = 0, h = x, m, res;
		while(l <= h) {
			m = l + (h - l) / 2;
			if(m*m == x)
				return m;
			else if(m*m < x) {
				l = m + 1;
				res = m;
			}
			else //if(m*m > x)
				h = m - 1;
		}
		return res;
	}
	
};

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	while(t--) {
		ll n;
		std::cin >> n;
		Solution obj;
		std::cout << obj.floorSqrt(n) << std::endl;
	}


	return 0;
}
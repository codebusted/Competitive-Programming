#include <iostream>
#include <math.h>

#ifndef LOG
#define LOG(x) std::cout << x << std::endl;
#endif

// MODULAR EXPONENTIATION ALGORITHM -> FIND (x**y) % p in O(log y) time
int power(int x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;

	int modulo = 1000000007; // pow(10, 9)+7
	
	int n;
	while(t--) {
		std::cin >> n;
		//int maxx = int(pow(2, n) - 1) % int(pow(10, 9) + 7); // O(n**2)
		/*int maxx = power(2, n, pow(10, 9)); // O(logn)
		int count = 0;
		for(int x = 0; x < maxx; x++) {
			if((x^(x+1)) == ((x+2)^(x+3)))
				count++;
		}
		std::cout << count << std::endl;*/

		LOG(power(2, n-1, modulo)); /* analysing pattern we find every other number satisfies the condition
		from [0, 2^n - 1] we have 2^n numbers, therefore we have '2^n / 2' values of x that satisfies condition
		modulo operation is done to this number to get answer
		*/
	}	
	return 0;
}
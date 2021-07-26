

#include <iostream>
#include <vector>
#include <cstring> // memset

#define maxN 900000

std::vector<int> v;

// all prime number till n (using sieve)
void allPrime(int n) {

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	prime[0] = prime[1] = false;

	for(int p = 2; p*p <= n; p++) {
		if(prime[p]) {
			for(int i = p*p; i<= n; i+= p) // multiples of p are marked as false
				prime[i] = false;
		}
	}

	for(int i = 2; i <= n; i++) {
		if(prime[i])
			v.push_back(i);
	}

	return;
}

int kthprime(int k) {
	return v[k - 1];
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;

	allPrime(maxN);
	int k;
	while(t--) {
		std::cin >> k;
		std::cout << kthprime(k) << std::endl;
	}


	return 0;
}

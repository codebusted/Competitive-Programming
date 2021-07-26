
// FIND ALL PRIME NUMBERS IM RANGE
// SIEVE OF ERATOSTHENES
// principle -> multiple of a prime number cannot be prime
// time complexity = O(nlog log(n))

#include <iostream>
#include <cstring> // memset()

using namespace std;

void findAllPrime(int n) {

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for(int p = 2; p*p <= n; p++) {
		if(prime[p]) {
			for(int i = p*p; i<= n; i+= p) // multiples of p are marked as false
				prime[i] = false;
		}
	} 

	// print
	for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 

	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	findAllPrime(n);
	return 0;
}
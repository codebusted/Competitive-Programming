
/* prime number has two divisors
A number has exactly three divisors only when it is 
square of a prime number
*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
	if(n == 0 || n ==  1)
        return false;
    for(int i = 2; i<=sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int exactly3Divisors(int N) {
	if(N == 0 || N == 1)
		return 0;

	int count =0;
	for(int i = 2; i*i <= N; i++) {
		if(isPrime(i))
			count++;
	}
	return count;
}

int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
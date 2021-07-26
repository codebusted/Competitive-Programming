
// MODULAR MULTIPLICATIVE INVERSE
// using EXTENDED EUCLIDEAN ALGORITHM

#include <iostream>

using namespace std;

int gcdExtended(int a, int b, int *x, int *y)
{  
    // Base Case  
    if (a == 0)
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; // To store results of recursive call  
    int gcd = gcdExtended(b % a, a, &x1, &y1);  
  
    // Update x and y using results of  
    // recursive call  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
}

int modInverse(int a, int m) {
	int x, y;
	int g = gcdExtended(a, m, &x, &y);
	if(g != 1 || m == 1)
		return -1;
	return ((x % m + m) % m); // x in range [0, m)
}

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		
		//calling function modInverse()
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}
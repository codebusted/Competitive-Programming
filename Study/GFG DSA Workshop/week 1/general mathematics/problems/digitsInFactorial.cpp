
// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
#include <math.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

/*double factorial(int n) 
{ 
     if(n == 0) 
          return 1; 
    int i = n;
    double fact = 1; 
    while (n / i != n) { 
        fact = fact * i; 
        i--; 
    } 
    return fact; 
} 

int digitsInFactorial(int N)
{
    // code here
	double fact = factorial(N);
	cout << fact << endl;
	int digits = floor(log10(fact) + 1);

	return digits;
}*/

//  METHOD 2: (EFFICIENT METHOD)
// log(a*b*c... ) = log(a) + log(b) + log(c) +...
int digitsInFactorial(int N) {
	double res = 0;                // result can be a large number that is why 'double' is used
	for(int i = 1; i <= N; i++) {
		res += log10(i);
	}
	return res = floor(res) + 1;
}

// { Driver Code Starts.

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
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int N)
{
    //Your code here
    if(N == 0 || N ==  1)
        return false;
    for(int i = 2; i<=sqrt(N); i++)
        if(N % i == 0)
            return false;
    return true;
}


int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here
	    int left = 0, right = 0;
	    for(int i = 0; i < N.size() / 2; i++)
	    	left = left + ((int)N[i] - '0');

	    for(int i = N.size() - 1; i > N.size() / 2; i--)
	    	right = right + ((int)N[i] - '0');
	    
	    if(left == right)
	    	return true;
	    return false;
	}
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
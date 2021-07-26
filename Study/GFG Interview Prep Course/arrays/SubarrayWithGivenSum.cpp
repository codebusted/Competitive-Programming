// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int currSum = 0, l = 0, r = 0;
        vector<int> v;
        for(int i = 0; i <= n; i++) {
        	if(currSum == s) {
                v.push_back(l+1);
                v.push_back(r);
                return v;
            }

            currSum += arr[i];
            r++;
            
            while(currSum > s) {
                currSum -= arr[l];
                l++;
            }
        }
        
        if(v.size() == 0)
            v.push_back(-1);
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
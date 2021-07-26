// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it. 
int immediateSmaller(int arr[], int n, int x)
{
    // your code here
    int diff, num;
    int ind = -1;
    for(int i = 0;  i < n; i++) {
        if(arr[i] < x) {
            diff = x - arr[i];
            num = arr[i];
            ind = i;
            break;
        }
    }
    for (int i = ind; i < n; ++i)
    {
        if(arr[i] < x && (x - arr[i]) < diff) {
            num = arr[i];
            diff = x - arr[i];
        }
    }
    if(ind == -1)
        return -1;
    return num;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code Ends
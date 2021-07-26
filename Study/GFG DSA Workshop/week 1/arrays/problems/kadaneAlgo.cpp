
/* LARGEST SUM CONTINUOUS ARRAY (SUBARRAY) */

/* optimal solution is KADANE'S ALGORITHM
Kadane's algo---
max at nth index = element at n || (max till n-1 + arr(n))
max till n = arr(n) || ((max till n-1 + arr(n))
*/

#include <iostream>
#include <algorithm> // max()

using namespace std;

int maxSubarraySum(int arr[], int n) {
	int maxCurr = arr[0]; // sum till the current element
	int maxGlobal = arr[0]; // maximum sum 

    for (int i = 1; i < n; i++) 
    { 
        maxCurr = max(arr[i], maxCurr + arr[i]);

        if (maxGlobal < maxCurr)
            maxGlobal = maxCurr;
    } 
    return maxGlobal;
}

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}

// this problem is of type sliding window and can be solved using sliding window method
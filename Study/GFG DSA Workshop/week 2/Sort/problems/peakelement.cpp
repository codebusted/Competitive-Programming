#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    /*int peakElement(int arr[], int n)
    {
        // Your code here
		if(n == 1)
			return 0;

		if(arr[0] > arr[1])
			return 0;
		else if(arr[n-1] > arr[n-2])
			return n-1;

		int l = 1, h = n-2, m;
		while(l <= h) {
			m = l + (h - l) / 2;
			if(arr[m] > arr[m-1] && arr[m] > arr[m+1])
				return m;
			else if(arr[m] < arr[m-1])
				h = m - 1;
			else 
				l = m + 1;
		}
    }*/

    int findPeakUtil(int arr[], int low,
	                 int high, int n)
	{
	    // Find index of middle element
	    // (low + high)/2
	    int mid = low + (high - low) / 2;
	 
	    // Compare middle element with its
	    // neighbours (if neighbours exist)
	    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
	        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
	        return mid;
	 
	    // If middle element is not peak and its
	    // left neighbour is greater than it,
	    // then left half must have a peak element
	    else if (mid > 0 && arr[mid - 1] > arr[mid])
	        return findPeakUtil(arr, low, (mid - 1), n);
	 
	    // If middle element is not peak and its
	    // right neighbour is greater than it,
	    // then right half must have a peak element
	    else
	        return findPeakUtil(arr, (mid + 1), high, n);
	}
	 
	// A wrapper over recursive function findPeakUtil()
	int peakElement(int arr[], int n)
	{
	    return findPeakUtil(arr, 0, n - 1, n);
	}
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob.peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
		if(n==1 and A==0)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		cout<<f<<endl;
		}
		
	}

	return 0;
}  // } Driver Code Ends
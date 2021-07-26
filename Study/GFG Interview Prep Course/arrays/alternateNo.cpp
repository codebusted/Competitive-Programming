// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos, neg;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] >= 0) {
	            pos.insert(pos.begin(), arr[i]);
	        } 
	        else {
	            neg.insert(neg.begin(), arr[i]);
	        }
	    }

	    for(int i = 0; i < pos.size(); i++)
	    	cout << pos[i] << ' ';
	    cout << endl;

	    for(int i = 0; i < neg.size(); i++)
	    	cout << neg[i] << ' ';
	    cout << endl;
	    
	    for(int i = 0; i < n; i++) {
	        if(!pos.empty() && i % 2 == 0 ) {
	            arr[i] = pos.back();
	            pos.pop_back();
	        }
	        else if(!neg.empty() && i % 2 != 0) {
	            arr[i] = neg.back();
	            neg.pop_back();
	        }
	        else if(neg.empty()) {
	            arr[i] = pos.back();
	            pos.pop_back();
	        }
	        else {
	            arr[i] = neg.back();
	            neg.pop_back();
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
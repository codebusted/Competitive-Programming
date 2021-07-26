#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends



int transitionPoint(int arr[], int n) {
    // code here
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;
  
        if(arr[m] == 0)
            l = m + 1;

        else if(arr[m] == 1) {
            if(m == 0 || ((m > 0) && arr[m - 1] == 0))
                return m;
            r = m - 1;
        }
    } 
    return -1; 
}
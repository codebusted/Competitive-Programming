// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

#ifndef ll
#define ll long long
#endif

#ifndef MAX
#define MAX 1000000007
#endif

class Solution{
public:
    void fact(std::vector<long long int> &v, long long int x) {
        long long int temp = 1;
        v[0] = 1;
        for(int i = 1; i <= x; i++) {
            temp = (temp * i) % MAX;
            v[i] = temp % MAX;
        }
        return;
    }

    vector<long long> factorial(vector<long long> a, int n) {
        long long int m = a[0];
        for(int i = 0; i < n; i++) {
            if(a[i] > m)
                m = a[i];
        }
        std::vector<long long int> f(m+1);
        fact(f, m);
        std::vector<long long int> res(n);
        for(int i = 0; i < n; i++) {
            res[i] = f[a[i]];
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long int> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
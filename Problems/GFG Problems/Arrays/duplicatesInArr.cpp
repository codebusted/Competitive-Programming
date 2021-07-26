// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// execution time = 0.40
/*vector<int> duplicates(int a[], int n) {
    // code here
    std::vector<int> v;
    for(int i = 0; i < n; i++) {
        v.push_back(0);
    }

    for(int i = 0; i < n; i++) {
        v[a[i]]++;
    }

    std::vector<int> newv;

    for(auto i = v.begin(); i != v.end(); ++i) {
        if(*i > 1)
            newv.push_back(i - v.begin());
    }
    
    if(newv.size() == 0)
        newv.push_back(-1);
    return newv;

}*/

// given solution in hint
//execution  time = 0.60
vector<int> duplicates(int a[], int n) {
    // First check all the values that are
    // present in an array then go to that
    // values as indexes and increment by
    // the size of array
    for (int i = 0; i < n; i++) {
        int index = a[i] % n;
        a[index] += n;
    }

    // Now check which value exists more
    // than once by dividing with the size
    // of array
    bool flag = false;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if ((a[i] / n) > 1) {
            ans.push_back(i);
            flag = true;
        }
    }
    if (!flag) ans.push_back(-1);
    return ans;
}
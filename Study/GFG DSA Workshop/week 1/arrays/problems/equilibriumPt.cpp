// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// time complexity = O(n*n)
/*int equilibriumPoint(long long arr[], int n) {

    int l = 0;
    int r = n - 1;

    int suml = 0, sumr = 0;
    int mid = l + (r - l) / 2;

    for(int i = 0; i < mid; ++i)
        suml += arr[i];

    for (int i = mid + 1; i < n; ++i)
        sumr += arr[i];

    while(mid > 0 || mid < n)
        if(suml == sumr)
            return mid + 1;

        else if(suml > sumr) {
            suml -= arr[mid - 1];
            sumr += arr[mid];
            mid--;
        }
        else {
            suml += arr[mid];
            sumr -= arr[mid + 1];
            mid++;
        }

    return -1;
}*/

// time complexity = O(n)
int equilibriumPoint(long long arr[], int n) {

    int l = 0;
    int r = n - 1;

    int sum = 0, suml = 0;

    for (int i = 0; i < n; ++i)  
        sum += arr[i];

    for (int i = 0; i < n; ++i)
    {
        sum -= arr[i];

        if(suml == sum)
            return i + 1;
        else {
            suml += arr[i];
        }
    }
    return -1;
}
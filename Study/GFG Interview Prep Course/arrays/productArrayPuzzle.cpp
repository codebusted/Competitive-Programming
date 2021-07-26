#include <iostream>
#include <vector>

#ifndef ll
#define ll long long
#endif

using std::cout;
using std::cin;
using std::endl;

// METHOD1: USING TWO ARRAYS TO STORE LEFT AND RIGHT SIDE PRODUCT
std::vector<ll int> productExceptSelf(std::vector<ll int> &num, int n) {
	std::vector<ll int> vec;
	std::vector<ll int> l, r;
	l.push_back(num[0]);
	r.push_back(num[n-1]);
	for(int i = 1; i < n; i++) {
		l.push_back(l[i-1] * num[i]);
		r.push_back(r[i-1] * num[n-1-i]);
	}
	for(int i = 0; i < n; i++)
		cout << l[i] << ' ';
	cout << endl;
	for(int i = 0; i < n; i++)
		cout << r[i] << ' ';
	cout << endl;
	vec.push_back(r[n-2]);
	for(int i = 1; i < n - 1; i++) {
		vec.push_back(l[i-1] * r[n-1-(i+1)]);
	}
	vec.push_back(l[n-2]);
	return vec;
}

// METHOD 2: WITHOUT USING EXTRA ARRAYS
std::vector<ll int> productExceptSelf2(std::vector<ll int> &num, int n) {
	ll int temp = 1ll;
	std::vector<ll int> vec(n);
	for(int i = 0; i < n; i++) {
		vec[i] = temp;
		temp *= num[i];
	}
	temp = 1ll;
	for(int i = n-1; i >= 0; i--) {
		vec[i] *= temp;
		temp *= num[i];
	}
	return vec;
}	

int main(int argc, char const *argv[])
{
	int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        std::vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        vec = productExceptSelf2(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}

#include <iostream>

#define ll long long

using namespace std;

ll int maxContests(ll int n, ll int k, ll int d, ll int a[]) {
	ll int suma = 0;
	for (ll int i = 0; i < n; ++i)
	{
		suma += a[i];
		if(suma > d * k)
			return d;
	}
	return suma / k;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	ll int n, k, d;
	ll int a[100000];
	while(t--) {
		
		cin >> n >> k >> d;
		
		for (ll int i = 0; i < n; ++i)
			cin >> a[i];

		cout << maxContests(n, k, d, a) << endl;
	}

	return 0;
}
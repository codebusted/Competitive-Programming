
#include <iostream>
#include <numeric> // accumulate
#include <algorithm> // sort
#include <vector>

using namespace std;

#define ll long long

int minSwap(ll int n, ll int m, ll int a[100],ll int b[100]) {
	ll int suma, sumb, diffab;

	std::vector<ll int> va (a, a+n);
	std::vector<ll int> vb (b, b+m);

	suma = accumulate(va.begin(), va.begin()+n, 0);
	sumb = accumulate(vb.begin(), vb.begin()+m, 0);
	diffab = sumb - suma;

	if(diffab <= 0)
		return 0;

	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());
	
	int count = 0;
	while(diffab > 0) {
		if(vb.back() > va.front() && va.size() != 0 && vb.size() != 0) {
			diffab -= 2 *(vb.back() - va.front());
			va.erase(va.begin() + 0);
			vb.pop_back();
			count++;
		}
		else
			return -1;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	ll int t;
	cin >> t;

	ll int n, m;
	
	ll int a[100], b[100];
	
	while(t--) {
		cin >> n >> m;

		for(ll int i = 0; i < n; ++i)
			cin >> a[i];
		for(ll int i = 0; i < m; ++i)
			cin >> b[i];

		cout << minSwap(n, m, a, b) << endl;

	}
	return 0;
}
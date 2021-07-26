#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

int GCD(int a, int b) {
	if(a == 0)
		return b;
	return GCD(b % a, a);
}

int findGCDArr(std::vector<int> v) {
	int res = v[0];
	for(int i = 1; i < v.size(); i++) {
		res = GCD(v[i], res);
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> v;
		int temp;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			v.push_back(temp);
		}
		int factor = findGCDArr(v);
		int maxInd = max_element(v.begin(), v.end()) - v.begin();
		v[maxInd] = factor;
		for(int i = 0; i < n; i++) {
			v[i] = v[i] / factor;
		}
		int sum = 0;
		for(int i = 0; i < n; i++) {
			sum += v[i];
		}
		/*cout << factor << endl;
		for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
			cout << *i << ' ';
		}
		cout << endl;*/
		cout << sum << endl;
	}
	return 0;
}

// josephus problem
#include <iostream>
#include <vector>

using namespace std;

int solve(int k, std::vector<int> &v, int index) {
	if(v.size() == 1) {
		return v[0];
	}

	index = (index + k) % v.size();
	v.erase(v.begin() + index);
	return solve(k, v, index);
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		int n, k;
		cin >> n;
		cin >> k;

		std::vector<int> v;
		for(int i = 1; i < n  + 1; i++) {
			v.push_back(i);
		}

		int index = 0;

		cout << solve(k - 1, v, index) << endl;
	}
	return 0;
}
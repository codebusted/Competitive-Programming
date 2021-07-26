#include <iostream>
#include <vector>

using namespace std;

int solve(std::vector<int> &v) {
	if(v.size() == 1)
		return v[0];

	for(int i = 0; i < v.size(); i=i+2)
		v.erase(v.begin()+i);

	return solve(v);
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;

		std::vector<int> v;
		for(int i = 1; i < n + 1; i++)
			v.push_back(i);
		cout << solve(v) << endl;
	}
	return 0;
}
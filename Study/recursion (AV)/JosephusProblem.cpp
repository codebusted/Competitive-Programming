
// (based on IBH method)
#include <iostream>
#include <vector>


int solve(int k, std::vector<int> &v, int index) 
{
	if(v.size() == 1) {
		return v[0];
	}
	index = (index + k) % v.size(); // for rotation
	v.erase(v.begin() + index);
	return solve(k, v, index);
}

int main(int argc, char const *argv[])
{
	int n, k;
	std::cin >> n;
	std::cin >> k;

	std::vector<int> v;
	for(int i = 1; i < n + 1; i++) {
		v.push_back(i);
	}
	int index = 0;

	int res = solve(k - 1, v, index);
	std::cout << res << std::endl;

	return 0;
}
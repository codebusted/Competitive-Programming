#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int t, n, k;
	cin >> t;
	std::vector<int> v;
	while(t--) {
		cin >> n >> k;
		v.clear();
		int temp;
		for(int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		
	}

	return 0;
}
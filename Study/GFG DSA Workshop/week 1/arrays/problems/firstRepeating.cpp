
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int firstRepeat(int n, std::vector<int> arr);

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;

	int n, res;
	std::vector<int> arr;
	
	while(t--) {
		std::cin >> n;
		arr.clear();
		int temp;
        for (int i = 0; i < n; i ++) {
            std::cin >> temp;
            arr.push_back(temp);
        }
        res = firstRepeat(n, arr);
        std::cout << res << std::endl;
	}


	return 0;
}

int firstRepeat(int n, std::vector<int> arr) {
	std::map<int, int> map;
	int minInd = n;
	for(int i = 0; i < n; i++) {
		if(!map[arr[i]])
			map[arr[i]] = i+1;

		else {
			if(minInd > map[arr[i]])
				minInd = map[arr[i]];
		}
	}
	if(minInd == n)
		return -1;
	return minInd;
}

// SLIDING WINDOW + HASHING
#include <iostream>
#include <vector>
#include <map>

std::vector<int> countDistinct(int arr[], int n, int k) {
	std::vector<int> v;
	std::map<int, int> hm;
	int i = 0, j = 0, dist = 0;
	while(j < n) {
		hm[arr[j]]++;
		if(j - i + 1 < k)
			j++;
		else if(j - i + 1 == k) {
			v.push_back(hm.size());
			if(hm[arr[i]] == 1)
				hm.erase(arr[i]);
			else
				hm[arr[i]]--;
			i++;
			j++;
		}
	}
	return v;
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;

	int n, k;
	while(t--) {
		std::cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			std::cin >> arr[i];

		std::cin >> k;
		std::vector<int> v;
		v = countDistinct(arr, n, k);

		for (int i : v) 
        	std::cout << i << " ";
        std::cout << std::endl;
	}
	return 0;
}
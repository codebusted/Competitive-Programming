
// sliding window: variable window size

#include <iostream>
#include <vector>

int maxLen(int n, std::vector<int> arr, int k) {
	int maxl = -1, sum = 0;
	int i = 0, j = 0;
	while(j < arr.size()) {
		sum += arr[j];
		j++;
		if(sum == k) 
			maxl = std::max(maxl, j - i);
		if(sum > k) {
			sum -= arr[i];
			i++;
		}
	}
	return maxl;
}

int main(int argc, char const *argv[])
{
	int n, k;
	std::cin >> n;

	std::vector<int> v;
	int temp;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		v.push_back(temp);
	}

	std::cin >> k;

	std::cout << maxLen(n, v, k) << std::endl;
	return 0;
}

#include <iostream>
#include <map>

// using hash map: time complexity- O(nlogn)
// map<key, value> : map<sum, index>
int maxLen(int arr[], int n) {

	int sum = 0, maxl = 0;
	std::map<int, int> hm;
	for(int i = 0; i < n; i++) {
		sum += arr[i];

		if(arr[i] == 0 && maxl == 0)
			maxl = 1;
		if(sum == 0)
			maxl = i + 1; 

		if(hm.find(sum) != hm.end()) {
			maxl = max(maxl, i - hm[sum]);
		}
		hm.insert(std::pair<int, int>(sum, i));
	}
	return maxl;
}

int main(int argc, char const *argv[])
{
	int T;
    std::cin >> T;
    while (T--)
    {
        int N;
        std::cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            std::cin >> A[i];
        std::cout << maxLen(A, N) << std::endl;
    }
	return 0;
}
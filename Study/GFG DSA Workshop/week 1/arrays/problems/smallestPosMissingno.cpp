#include <iostream>
#include <algorithm>

int findMissing(int n, int arr[]) {
	int no = 0;
	std::sort(arr, arr+n);
	for(int i = 0; i < n; i++) {
		if(arr[i] == no+1) {
			no = arr[i];
		}
	}
	return no + 1;
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int arr[n+1];
	for(int i = 0; i < n; i++)
		std::cin >> arr[i];

	std::cout << findMissing(n, arr) << std::endl;
	return 0;
}
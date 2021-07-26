
// NOTE: normal array used

// time complexity: O(n*n)

#include <iostream>
#include <algorithm>

void bubbleSort(int n, int arr[]) {
	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n-1-i; ++j) {
			if(arr[j] > arr[j+1]) {
				std::swap(arr[j], arr[j+1]);
			}
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	bubbleSort(n, arr);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;


	return 0;
}
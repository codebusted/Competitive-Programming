
/* time complexity- O(nlogn)
*/

#include <iostream>

void mergeSort(int arr[], start, end) {
	
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	mergeSort(arr, 0, n-1);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;


	return 0;
}
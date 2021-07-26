
/* time complexity - O(n^2)
even though it's time complexity in worst case senario is more it is considered quite efficient in practical senarios
using randomised version of quick sort, time complexity is O(nlogn)
it is a inplace sorting algorithm
*/

#include <iostream>

int partition(int arr[], int start, int end) {
	int pivot = arr[end]; // last element choosen as pivot
	int pind = start;
	for(int i = start; i < end; i++) {
		if(arr[i] <= pivot) {
			std::swap(arr[i], arr[pind]);
			pind++;
		}
	}
	std::swap(arr[pind], arr[end]);
	return pind;
}

void quickSort(int arr[], int start, int end) {
	if(start >= end)
		return;
	int ind = partition(arr, start, end);
	quickSort(arr, start, ind - 1);
	quickSort(arr, ind + 1, end);
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	quickSort(arr, 0, n-1);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;


	return 0;
}
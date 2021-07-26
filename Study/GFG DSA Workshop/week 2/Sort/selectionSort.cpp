
// time complexity: O(n*n)

#include <iostream>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        std::swap(arr[min_idx], arr[i]);
        for(int i = 0; i < 6; i++) {
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
    }
}


int main(int argc, char const *argv[])
{
	int arr[] = {20, 11, 4, 10, 33, 2};
	selectionSort(arr, 6);

	for(int i = 0; i < 6; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	return 0;
}
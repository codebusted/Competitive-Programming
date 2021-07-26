#include <iostream>

int trapWater(int arr[], int n) {

	// left max array
	int left[n];
	left[0] = arr[0];
	for(int j = 1; j < n; j++)
		left[j] = std::max(arr[j], left[j - 1]);

	// right max array
	int right[n];
	right[n - 1] = arr[n - 1];
	for (int j = n - 2; j > 0; j--)
		right[j] = std::max(arr[j], right[j + 1]);

	int tot = 0;
	for(int i = 1; i < n - 1; i++) {
		tot = tot + std::min(left[i], right[i]) - arr[i];
	}

	return tot;
}

int main(int argc, char const *argv[])
{
	/*int n;
	std::cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}*/
	int n = 12;
	int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

	std::cout << trapWater(arr, n) << std::endl;


	return 0;
}
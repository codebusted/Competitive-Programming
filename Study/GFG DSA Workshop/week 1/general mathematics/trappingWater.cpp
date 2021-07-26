
#include <iostream>


int find_left_max(int arr[],int n, int i) {
	int maximum = 0;
	for(int j = 0; j <= i; j++)
		maximum = std::max(maximum, arr[j]);
	return maximum;
}

int find_right_max(int arr[], int n, int i) {
	int maximum = 0;
	for (int j = n-1; j >= i; --j)
	{
		maximum = std::max(maximum, arr[j]);
	}
	return maximum;
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

	int tot = 0;
	for(int i = 1; i < n - 1; i++) {
		int left_max = find_left_max(arr, n, i);
		int right_max = find_right_max(arr, n, i);

		tot = tot + std::min(left_max, right_max) - arr[i];
	}

	std::cout << tot << std::endl;
	return 0;
}

#include <iostream>

using namespace std;

void convertToWave(int *arr, int n) {
	int temp;
	for(int i = 0; i < n - 1; i += 2) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	convertToWave(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
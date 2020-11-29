#include <iostream>
using namespace std;

int maxInArr(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) max = arr[i];
		else break;
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int n = 5;
	int arr[] = {1, 45, 47, 50, 51};
	int res = maxInArr(arr, n);
	cout << res << endl;
	return 0;
}
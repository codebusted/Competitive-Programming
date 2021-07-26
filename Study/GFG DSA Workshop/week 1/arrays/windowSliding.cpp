
/* SLIDING WINDOW TECHNIQUE (FIXED SIZE WINDOW)

Q. Given an array of integers of size 'n'.
Our aim is to calculate the maximum sum of 'k' 
consecutive elements in the array.

*/

#include <iostream>

using namespace std;

int maxConsecutiveSum(int n, int arr[], int k) {
	// invalid case
	if(k > n)
		return -1;

	int maxSum = 0;
	for(int i = 0; i < k; i++)
		maxSum += arr[i];
	int newSum = 0;
	newSum = maxSum;
	for(int i = k; i < n; i++) {
		newSum = newSum - arr[i - k] + arr[i];
		if(newSum > maxSum)
			maxSum = newSum;
	}
	return maxSum;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int k;
	cin >> k;
	cout << maxConsecutiveSum(n, arr, k);
	return 0;
}
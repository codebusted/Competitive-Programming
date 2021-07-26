
/* Prefix Sum Array: The prefix sum array of any array, 
arr[] is defined as an array of same size say, prefixSum[] 
such that the value at any index i in prefixSum[] is sum 
of all elements from indexes 0 to i in arr[].
*/

#include <iostream>

using namespace std;

void prefixSum(int n, int arr[], int prefixArr[]) {
	
	prefixArr[0] = arr[0];
	
	for (int i = 1; i < n; ++i)
	{
		prefixArr[i] = arr[i] + prefixArr[i - 1];
	}
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

	int prefixArr[n];
	prefixSum(n, arr, prefixArr);
	
	for (int i = 0; i < n; ++i)
	{
		cout << prefixArr[i] << " ";
	}

	return 0;
}
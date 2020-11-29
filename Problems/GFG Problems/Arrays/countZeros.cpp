#include <iostream>
using namespace std;


int countZeros(int arr[], int n) {
	int i = n;
	int zeros = 0;
	while(arr[i - 1] != 1) {
		zeros ++;
		i--;
		if(i == 0) break;
	}
	return zeros;
}

int main(int argc, char const *argv[])
{
	int n = 5;
	int arr[] = {0, 0, 0, 0, 3};

	int res = countZeros(arr, n);
	cout << res << endl;
	return 0;
}
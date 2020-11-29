#include <iostream>

using namespace std;

void reversal(int arr[], int strt, int end) {
	int temp;
	while(strt < end) {
		temp = arr[strt];
		arr[strt] = arr[end];
		arr[end] = temp;
		strt ++;
		end --;
	}
}

void rotation(int arr[], int d, int n) {
	reversal(arr, 0, d-1);
	reversal(arr, d, n-1);
	reversal(arr, 0, n-1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(int argc, char const *argv[])
{
	int n, d;
	cin >> n;
	int arr[n + 100];
	for (int i = 0; i < n; ++i) {
	    cin >> arr[i];
	}
	cin >> d;

	rotation(arr, d, n);


	return 0;
}
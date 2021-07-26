
#include <iostream>

using namespace std;

void mergeSorted(int n, int m, int arr1[], int arr2[], int arr3[] ) {
	int i = 0, j = 0, k = 0;
	while(i < n && j < m) {
		if(arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
            arr3[k++] = arr2[j++];
    }
    while(i < n)
        arr3[k++] = arr1[i++];
    while(j < m)
        arr3[k++] = arr2[j++];

    return;
}

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;

	int arr1[n];
	int arr2[m];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> arr2[i];
	}

	int arr3[n + m];
	mergeSorted(n, m, arr1, arr2, arr3);

	for(int i = 0; i < m + n; ++i) {
		cout << arr3[i] << " ";
	}

	return 0;
}
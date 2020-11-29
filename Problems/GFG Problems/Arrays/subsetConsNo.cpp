#include <iostream>
#include <limits>

using namespace std;

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  
    }  
}  

int minSubsetConsNo(int n, int arr[]) {
    int count = 1; // Initialize result 
    for (int i = 0; i < n - 1; i++) { 
        // Check if there is beginning of another 
        // subset of consecutive number 
        if (arr[i] + 1 != arr[i + 1]) 
            count++; 
    }
	return count;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	int n;
	int arr[100];
	int ite = 0;
	while(ite < T) {
		cin >> n;

		for(int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		insertionSort(arr, n);
		int res = minSubsetConsNo(n, arr);
		cout << res << endl;

		ite ++;
	}
	return 0;
}
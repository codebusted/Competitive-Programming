
/*
reverse(0, d - 1)
reverse(d, n)
reverse(0, n)
*/

#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end);
void rotateArr(int arr[], int n, int d);

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int d;
	cin >> d;
	rotateArr(arr, d, n);

	// print
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

void rotateArr(int arr[], int d, int n) {
	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);

}

void reverseArray(int arr[],int start,int end) 
{ 
    if (start >= end) 
        return; 
    
    // Swap elements at start and end  
    int temp = arr[start];  
    arr[start] = arr[end];
    arr[end] = temp; 
      
    // Recursive Function calling 
    reverseArray(arr, start + 1, end - 1);  
}
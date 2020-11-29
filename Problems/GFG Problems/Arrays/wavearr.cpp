
#include <iostream>

using namespace std;

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void wavearr(int arr[], int n) {
	for(int i = 0; i < n-1; i += 2) {
		swap(&arr[i], &arr[i + 1]);
	}
}

int main(int argc, char const *argv[])
{
	int n = 6;
	int arr[] = {2,4,7,8,9,10};
	//int res = sample(n, arr);
	wavearr(arr, n);
	for (int i=0; i<n; i++) 
       cout << arr[i] << " ";
	return 0;
}
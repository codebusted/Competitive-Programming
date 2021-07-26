
// ROTATION OF ARRAYS USING JUGGLING ALGORITHM

/* time complexity = O(n)
	space complexity = O(1)
*/

#include <iostream>

using namespace std;

int gcd(int a, int b) { // euclidean algorithm
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int rotateArray(int arr[], int n, int d) {

	d = d % n;  // to handle d >= n

	int g = gcd(n, d);

	// WRONG
	/*for(int i = 0; i < g; i++){
		int temp = arr[i];
		int ite = 0;
		for(int j = i; j + g < n; j = j + g) {
			arr[j] = arr[j + g];
			ite++;
		}
		arr[i + (ite * g)] = temp;
	}*/
	for(int i = 0; i < g; i++) {
		int temp = arr[i];
		int j = i;

		while(true) {
			int k = j + d;

			if(k >= n)
				k = k - n;

			if(k == i)
				break;

			arr[j] = arr[k];
			j = k; 
		}
		arr[j] = temp;
	}

	// print
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

//METHOD2
/*int rotateArray(int arr, int n, int k) {
	int min = n, i = 0, temp;
	while(i < min) {
		temp = arr[i];
		j = i;
		while(j != (n+k+i)%n) {
			arr[j] = arr[(j+k)%n];
			j = (j+k)%n;
			if(j<min)
				min=j;
		}
		arr[(n+i-k)%n] = temp;
		i = i+1;
	}
	// print
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}*/

int main(int argc, char const *argv[])
{
	int size;
	cin >> size;

	int arr[size];
	for(int i = 0; i < size; i++)
		cin >> arr[i];

	int d;
	cin >> d;

	rotateArray(arr, size, d);

	return 0;
}
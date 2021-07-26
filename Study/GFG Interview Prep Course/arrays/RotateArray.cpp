#include <iostream>

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

void rotateArr(int arr[], int d, int n) {
	d = d % n;
	int g = gcd(d, n);
	for(int i = 0; i < g; i++) {
		int temp = arr[i];
		int j = i;
		while(1) {
			int k = (j + d) % n;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	while(t--) {
		int n, d;
		std::cin >> n >> d;
		int arr[n];
		for(int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}
		rotateArr(arr, d, n);
		for(int i = 0; i < n; i++)
			std::cout << arr[i] << ' ';
		std::cout << std::endl;
	}
	return 0;
}
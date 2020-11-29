#include <iostream>
#include <limits>

using namespace std;

void rotateArr() {
	cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	int n, d;
	cin >> n;
	cin >> d;

	int arr[n + 100];
	for (int i = 0; i < n; ++i) {
	    cin >> arr[i];
	}

	int temp[d];
	for (int i = 0; i < d; i++) {
		temp[i] = arr[i];
	}

	for (int i = 0; i < n - d; i++) {
		arr[i] = arr[i + d];
	}

	for (int i = 0; i < d; i++) {
		arr[i + n - d] = temp[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int gcd(int d, int n) {
	if (n == 0)
		return n;
	if (d == 0) 
		return d;

	if (n == d)
		return n;

	if (n > d)
		return gcd(n-d, d);
	return gcd(n, d-n);
}

void rotateArr2() {
	cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	int n, d;
	cin >> n;
	cin >> d;

	int arr[n + 100];
	for (int i = 0; i < n; ++i) {
	    cin >> arr[i];
	}

	int i, j, k, temp;
	for(i=0; i<gcd(d, n); i++) {
		temp = arr[i];
		j = i;
		while(1) {
			k = j + d;
			if(k >= n)
				k = k - n;
			if(k == i) 
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	int ite = 0;
	while(ite < T) {
		
		//rotateArr();
		rotateArr2();

		ite ++;
	}
	return 0;
}
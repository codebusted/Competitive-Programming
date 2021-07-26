
#include <iostream>

using namespace std;

int removeDuplicate(int a[], int n) {
	if (n == 0 || n == 1)
		return n;

	int ind = 1;
	for (int i = 1; i < n; ++i)
	{
		if(a[i] != a[i - 1]) {
			a[ind++] = a[i];
		}
	}
	return ind;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int size = removeDuplicate(a, n);

	cout << size << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
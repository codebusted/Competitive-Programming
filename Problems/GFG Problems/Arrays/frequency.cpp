#include <iostream>
#include <map>

using namespace std;

int sample(int n, int arr) {
	map<int, int> freq;

	for(int i = 1; i < n + 1; i++) {
		freq.insert(pair<int, int>(i, 0));
	}

	for(int i = 1; i < n + 1; i++) {
		
	}
}

int main(int argc, char const *argv[])
{
	int n = 5;
	int arr[] = {1, 45, 47, 50, 51};
	int res = sample(n, arr);
	cout << res << endl;
	return 0;
}
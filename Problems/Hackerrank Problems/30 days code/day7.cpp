#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	vector<int> arr(n);

	int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    
    int l = 0, h = arr.size() - 1;
    while(l < h) {
        arr[l] = arr[l] + arr[h];
        arr[h] = arr[l] - arr[h];
        arr[l] = arr[l] - arr[h];
        l++;
        h--;
    }
    
    for(int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
	return 0;
}
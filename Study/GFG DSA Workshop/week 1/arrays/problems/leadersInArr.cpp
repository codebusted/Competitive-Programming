
#include <iostream>
#include <vector>
#include <algorithm> // reverse()

using namespace std;

vector<int> leaders(int arr[], int n){
	std::vector<int> v;
	v.push_back(arr[n- 1]);
    for (int i = n - 2; i > -1; --i)
    {
    	if(arr[i] >= v.back())
    		v.push_back(arr[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	std::vector<int> v = leaders(arr, n);

	for (auto i = v.begin(); i != v.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

	return 0;
}
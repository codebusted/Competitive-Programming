#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// frequency high to low
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second > b.second;
}

std::vector<std::pair<int, int> > sortMap(std::map<int, int>& m) {
/*ALGO: copy elements of map to vector of pairs
		sort using vector sort function*/

	// vector of pairs
	std::vector<std::pair<int, int> > v;

	for(auto &it:m)
		v.push_back(it);

	// sort by frequency high to low
	std::sort(v.begin(), v.end(), cmp);

	return v;
}

std::vector<int> sortByFreq(int arr[], int n) {
	std::map<int, int> hm;
	std::vector<int> v;
	for(int i = 0; i < n; i++) {
		// initial value of it is initialized as zero
		hm[arr[i]]++;
	}

	std::vector<std::pair<int, int>> freqV = sortMap(hm);

	for(auto it : freqV) {
		for(int i = 0; i < it.second; i++)
			v.push_back(it.first);
	}

	return v;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    vector<int> v;
	    v = sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}
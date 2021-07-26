#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

std::vector<int> printNonRepeated(int arr[], int n) {
	std::unordered_map<int, int> hm;
	std::vector<int> v;

	/*for(int i = 0; i < n; i++) {
		if(hm.find(arr[i]) != hm.end())
			hm[arr[i]]++;
		hm.insert(std::pair<int, int> (arr[i], 1));
	}*/

	/* unordered_map stores the initial value as zero */
	for (int i = 0; i < n; i++)
        hm[arr[i]]++;

	/*for(auto i = hm.begin(); i != hm.end(); i++)
		cout << i->first << ' ' << i->second << '\t';
	cout << endl;

	for(auto i = hm.begin(); i != hm.end(); i++) {
		if(i->second == 1)
			v.push_back(i->first);
	}*/

	/* below code give the values in random
	for (auto e : hm) {
		if (e.second == 1)
			v.push_back(e.first);
	}*/
    // this gives the values in the order of the input array 
    // *I DON'T KNOW HOW THAT WORKS
	for(int i = 0; i < n; i++) {
		if(hm[arr[i]] == 1)
			v.push_back(arr[i]);
	}

	return v;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    std::vector<int> v;
	    v = printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}
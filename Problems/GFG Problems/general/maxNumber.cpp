
// mathematics
#include <iostream>

using namespace std;

class Solution {
  public:
  	
    string findMax(string N) {
        // code here
        int arr[10] = {0};
        string newStr = "";
        for(int i = 0; i < N.length(); i++)
        	arr[N[i]-'0']++;
        
        int k = 9;
        for(int i = 0; i < N.length(); i++)
	        if(arr[k] > 0)  
	        	{newStr += to_string(k); arr[k]--;}
	        else 
	        	{k--; i--;}
        
        return newStr;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    }
    return 0;
} 
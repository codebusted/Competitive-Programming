
#include <iostream>
#include <string>

#define ll long long
using namespace std;

char decodeChar(ll int n, string str) {
	
	int x = 97, y = 112;
	for(int i = 0; i < 3; ++i) {
		if(str[i] == '0') {
			y = y - ((y - x + 1) / 2);
		}
		else {
			x = x + ((y - x + 1) / 2);
		}
	}
	if(str[3] == '0')
		return (char)x;
	else
		return (char)y;
}

int main(int argc, char const *argv[])
{
	ll int t;
	cin >> t;

	ll int n;
	string s, res;
	while(t--) {
		cin >> n;
		cin >> s;

		res = "";
		int start = 0;
		string str;
		char ch;
		for (int i = 0; i < n / 4; ++i)
		{
			str = s.substr(start, start+4);
			ch = decodeChar(n, str);
			res.push_back(ch);
			start += 4;
		}
		cout << res << endl;
	}

	return 0;
}
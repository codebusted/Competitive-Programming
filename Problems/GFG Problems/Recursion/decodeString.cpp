
// included in easy but it is atleast a medium level question
// INCOMPLETE

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// using stack (incomplete)
/*void decodeString(string &encStr) {
	stack<int> intStack;
	stack<char> charStack;

	for(auto i = encStr.begin(); i != encStr.end(); ++i) {
		if((int)*i >= 48 && (int)*i <= 57)
			intStack.push(*i);
		else
			charStack.push(*i);
	}
}*/

// INPUT
// 2[a3[b]] = abbbabbb

// using recursion (smaller input method) (incorrect output)
string decodeString(string &encStr, string &result) {
	if(encStr.size() == 0) {
		return result;
	}

	int repeat = encStr[0] - '0';
	encStr.erase(encStr.begin() + 0);
	encStr.erase(encStr.begin() + 0);
	encStr.pop_back();

	
	string x = "";
	while(isalpha(encStr[0])) {
		x.push_back(encStr[0]);
		encStr.erase(encStr.begin() + 0);
	}

	string decStr = decodeString(encStr, result);

	decStr = x + decStr;

	for(int i = 0; i < repeat; ++i) {
		result = result + decStr;
	}

	return result;

	
}

int main() {
	string encStr;
	getline(cin, encStr);

	string result = "";
	string decStr = decodeString(encStr, result);
	cout << decStr << endl;

	return 0;
}
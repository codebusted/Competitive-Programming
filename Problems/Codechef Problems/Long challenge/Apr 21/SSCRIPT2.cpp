
// TIME COMPLEXITY: O(n)
#include <iostream>
#include <string>

void stringFind(int n, int k, std::string &str) {
	int temp = 0;
	for(int i = 0; i < n; i++) {
		if(temp < k) {
			if(str[i] == '*')
				temp++;
			else
				temp = 0;
		}
		if(temp == k) {
			std::cout << "YES" << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
	return;
}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	int n, k;
	std::string str;
	while(t--) {
		std::cin >> n >> k;
		str.clear();
		std::cin >> str;
		//str.substr(0, n);
		stringFind(n, k, str);
	}
	return 0;
}

// TIME COMPLEXITY: O(n*k)
#include <iostream>
#include <string>

void stringFind(int n, int k, std::string &str) {
	std::string str1(k, '*'); // create string of '*'

	std::string str2;
	for(int i = 0; i <= n - k; i++) {
		str2.clear();
		str2 = str.substr(i, k);
		if(str1.compare(str2) == 0) { // compare() returns 0 if strings are equal
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
		// std::string str1(k, '*');

		str.clear();
		std::cin >> str; // here getline() is not required as we input only one word
		str = str.substr(0, n);

		stringFind(n, k, str);

		/*std::string::size_type found = str.find(str1);

		if(found != std::string::npos)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;*/
	}
	return 0;
}
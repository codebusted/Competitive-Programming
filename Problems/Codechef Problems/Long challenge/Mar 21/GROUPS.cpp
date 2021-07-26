#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;

	int grp, prev;
	std::string str;
	while(t--) {
		std::cin >> str;
		grp = 0; prev = 0;
		for (auto i = str.begin(); i != str.end(); ++i) {
			if(*i == '0') {
				prev = 0;
			}
			else {
				if(prev == 0)
					grp++;
				prev = 1;
			}
		}
		std::cout << grp << std::endl;
	}


	return 0;
}
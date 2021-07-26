#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	string binStr;
    int rem, div;
    while(n > 0) {
        rem = n % 2;
        binStr.append(to_string(rem));
        n = n / 2;
    }
    
    // reverse string
    std::reverse(binStr.begin(), binStr.end());
    
    std::cout << binStr << std::endl;
    int max1 = 0, count = 0;
    for(int i = 0; i < binStr.length(); i++) {
        if(binStr[i] == '0')
            count = 0;
        else {
            count++;
            max1 = std::max(max1, count);
        }
    }
    std::cout << max1 << std::endl;

	return 0;
}
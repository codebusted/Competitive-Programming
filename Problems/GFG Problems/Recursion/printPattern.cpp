
#include <iostream>
#include <vector>

using namespace std;

/*void printPattern(int n, std::vector<int> &v) {
	if(v.size() != 1 && v.back() == n) {
		for (auto i = v.begin(); i != v.end(); ++i)
        	std::cout << *i << " ";
    	std::cout << std::endl;
		return;
	}

	if(v.back() > 0) {
		v.push_back(v.back() - 5);
		printPattern(n, v);
	}
		
	else {
		v.push_back(v.back() + 5);
		printPattern(n, v);
	}
	
	return;
}*/

void print(int n) {
	if(n > 0) {
		cout << n << " ";
		print(n - 5);
	}
	cout << n << " ";
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;
		
		/*std::vector<int> v;
		v.push_back(n);

		printPattern(n, v);*/
		print(n);
	}

	return 0;
}
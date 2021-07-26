#include <iostream>
#include <vector>

void prime(int n, std::vector<int> &primelist) {
	if(n==0 || n==1)
		return;

	std::vector<bool> v (n, true);

	v[0] = false;
	v[1] = false;
	for(int i = 2; i*i <= n; i++) {
		if(v[i]) {
			for(int j = i*i; j <= n; j+=i)
				v[j] = false;
		}
	}

	for(int i = 0; i <= n; i++) {
		if(v[i])
			primelist.push_back(i);
	}

	return;
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;

	std::vector<int> primelist;
	prime(n, primelist);

	for(std::vector<int>::iterator i = primelist.begin(); i != primelist.end(); i++)
		std::cout << *i << ' ';
	std::cout << std::endl;

	// kth prime number
	int k = 10;
	std::cout << primelist[k-1] << std::endl;

	return 0;
}
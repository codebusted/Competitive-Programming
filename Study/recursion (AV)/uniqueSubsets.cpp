// only unique elements of a set (using vector)
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <algorithm>    // std::find

void subsets(std::vector<std::string> &v, std::string ip, std::string op) {
	if(ip.length() == 0) {
		v.push_back(op);
		return;
	}
	std::string op1 = op; // no change
	std::string op2 = op; // change

	op2.push_back(ip[0]); // (str to be appended, starting index, lenght to append)
	ip.erase(ip.begin() + 0); // (beginning iterator + position to delete)
	subsets(v, ip, op1);
	subsets(v, ip, op2);

	return;
}

void uniqueSubsets(std::vector<std::string> &v, std::vector<std::string> &uniquev) {
	for (auto i = v.begin(); i != v.end(); ++i) {
		auto ite = std::find(uniquev.begin(), uniquev.end(), v[i - v.begin()]);
		if(ite == uniquev.end())
			uniquev.push_back(*i);
	}
}

int main(int argc, char const *argv[])
{
	std::vector<std::string> v = {};
	std::string ip;
	std::cin >> ip;
	std::string op = "";

	subsets(v, ip, op);

	std::vector<std::string> uniquev;

	uniqueSubsets(v, uniquev);

	for (auto i = uniquev.begin(); i != uniquev.end(); ++i)
        std::cout << *i << ", ";
    std::cout << std::endl;

	return 0;
}

// to get unique subsets using map is a better option
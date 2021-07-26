
// all subsets of a set
#include <iostream>
#include <string>


void subsets(std::string ip, std::string op) {
	if(ip.length() == 0) {
		std::cout << op << ", ";
		return;
	}
	std::string op1 = op; // no change
	std::string op2 = op; // change

	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0); // (beginning iterator + position to delete)
	subsets(ip, op1);
	subsets(ip, op2);


	return;
}

int main(int argc, char const *argv[])
{
	std::string ip;
	std::cin >> ip;
	std::string op = "";

	std::cout << "Powersets: ";
	subsets(ip, op);


	return 0;
}
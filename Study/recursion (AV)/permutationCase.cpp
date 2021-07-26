
// permutation of string in case (only lowercase character input)
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

void permutationSpaces(std::string ip, std::string op) {
	if(ip.length() == 0) {
		std::cout << op << ", " << std::endl;
		return;
	}
	std::string op1 = op; // no change
	std::string op2 = op; // case change

	op1.push_back(ip[0]);
	op2.push_back(toupper(ip[0]));
	ip.erase(ip.begin() + 0);

	permutationSpaces(ip, op1);
	permutationSpaces(ip, op2);

	return;
}

int main(int argc, char const *argv[])
{
	std::string ip;
	std::cin >> ip;
	std::string op = "";

	permutationSpaces(ip, op);


	return 0;
}
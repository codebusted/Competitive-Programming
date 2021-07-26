
// permutation of string in different cases
// (input includes uppercase, lowercase, digits)

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

void permutationSpaces(std::string ip, std::string op) {
	if(ip.length() == 0) {
		std::cout << op << ", " << std::endl;
		return;
	}

	if(isalpha(ip[0])) {
		std::string op1 = op; // lowercase
		std::string op2 = op; // uppercase

		op1.push_back(tolower(ip[0]));
		op2.push_back(toupper(ip[0]));

		ip.erase(ip.begin() + 0);

		permutationSpaces(ip, op1);
		permutationSpaces(ip, op2);
	}
	else {
		op.push_back(ip[0]);

		ip.erase(ip.begin() + 0);

		permutationSpaces(ip, op);
	}

	

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
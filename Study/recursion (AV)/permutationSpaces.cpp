
// permutation with spaces
#include <iostream>
#include <string>

void permutationSpaces(std::string ip, std::string op)  {
	if(ip.length() == 0) {
		std::cout << op << ", ";
		return;
	}
	std::string op1 = op; // not add space
	std::string op2 = op; // add space

	
	op1.push_back(ip[0]);
	op2.append(" ");
	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0); // (beginning iterator + position to delete)
	permutationSpaces(ip, op1);
	permutationSpaces(ip, op2);

	return;
}

int main(int argc, char const *argv[])
{
	std::string ip;
	std::cin >> ip;

	std::string op = "";
	op.push_back(ip[0]);

	permutationSpaces(ip.substr(1), op);


	return 0;
}
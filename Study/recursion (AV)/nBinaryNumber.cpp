
/* n digit binary number having no. of 1s greater than (and equal to) no. of 0s in all the prefixes
n = 5
prefixes  1s 0s
11010-	  3  2
1101-	  3  1
110- 	  2	 1
11- 	  2  0
1- 		  1  0
*/

#include <iostream>
#include <string>


void solve(int n, int ones, int zeros, std::string op) {
	if(n == 0) {
		std::cout << op << std::endl;
		return;
	}

	std::string op1 = op;
	op1.push_back('1');
	solve(n - 1, ones + 1, zeros, op1);

	if(ones > zeros) { // zeros are filled when n(1s) - n(0s) is atleast 1
		std::string op2 = op;
		op2.push_back('0');
		solve(n - 1, ones, zeros + 1, op2);
	}

	return;
}

void binaryNumber(int n) {
	int ones = 0, zeros = 0;
	std::string op = "";
	solve(n, ones, zeros, op);

	return;
}

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	binaryNumber(n);
	
	return 0;
}
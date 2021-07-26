#include <iostream>
#include <stack>
#include <vector>
#include <math.h> // pow()

int decimal(std::vector<int> v) {
	int len = v.size();
	int exp = len - 1;
	int res = 0;
	for(int i = 0; i < len; i++) {
		if(v[i] == 1)
			res += pow(2, exp);
		exp--;
	}

	return res;
}


int binary(int n, std::vector<int> &x) {
	std::stack<int> s;
	int r, q;
	while(n > 0) {
		r = n % 2;
		s.push(r);
		n = n / 2;
	}

	while(!s.empty()) {
		x.push_back(s.top());
		s.pop();
	}

	return 0;
}

int vectorB(std::vector<int> v, std::vector<int> A, std::vector<int> &B) {
	for(int i = 0; i < v.size(); i++) {
		if(v[i]==1) 
			B.push_back(!A[i]);
		else
			B.push_back(A[i]);
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int t, c;
	std::cin >> t;

	std::vector<int> v; // c in binary
	std::vector<int> A, B; // A and B in binary
	int a, b; // A and B in decimal
	int res = 0;
	while(t--)  {
		std::cin >> c;
		v.clear();

		binary(c, v); // c in binary
		int exp = v.size();
		for(int i = 0; i < pow(2, exp) / 2; i++) {
			A.clear();
			B.clear();
			binary(i, A); // A in binary
			std::cout << decimal(A) << std::endl;
			while(A.size() < v.size()) // zero padding of a
				A.insert(A.begin(), 0);
			vectorB(v, A, B); // B in binary
			a = decimal(A); // A in decimal
			b = decimal(B); // B in decimal
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			std::cout << std::endl;
			if(a * b > res)
				res = a * b;
		}
		
		std::cout << res << std::endl;
	}


	return 0;
}
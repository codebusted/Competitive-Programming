
// vector basics
#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
	// declaring vector
	std::vector<int> v;

	// initializing vector
	int temp;
	for (int i = 0; i < 5; i ++) {
		std::cin >> temp;
		v.push_back(temp);
	}

	// print vector elements
	for (auto i = v.begin(); i != v.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    // vector functions
    std::cout << "size: " << v.size() << std::endl;
    std::cout << "max size: " << v.max_size() << std::endl;
    std::cout << "capacity: " << v.capacity() << std::endl;

	return 0;
}

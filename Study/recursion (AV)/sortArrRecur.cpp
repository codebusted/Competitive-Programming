#include <iostream>
#include <vector>


void insert(std::vector<int> &v, int temp) {
	if(v.size() == 0 || v[v.size() - 1] <= temp) {
		v.push_back(temp);
		return;
	}
	int x = v[v.size() - 1];
	v.pop_back();
	insert(v, temp);
	v.push_back(x);
}

void sort(std::vector<int> &v) {
	if(v.size() <= 1)
		return;
	int temp = v[v.size() - 1];
	v.pop_back();
	sort(v);
	insert(v, temp);
}

int main(int argc, char const *argv[])
{

	std::vector<int> v;

	int sizeArr = 5;
	std::cout << "Enter Array Elements: ";
	int x;
	for (int i = 0; i < sizeArr; i ++) {
		std::cin >> x;
		v.push_back(x);
	}

	sort(v);

	std::cout << "Sorted Array: ";
	for (auto i = v.begin(); i != v.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
	
	return 0;
}
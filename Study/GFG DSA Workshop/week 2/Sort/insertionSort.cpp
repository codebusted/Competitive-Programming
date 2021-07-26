/* In-place sorting algorithms:
	insertion sort
	bubble sort
	selection sort
*/


// NOTE: vector used for array

// time complexity: O(n*n)

#include <iostream>
#include <vector>
#include <algorithm>

void sort(std::vector<int> &v) {
	int temp, j;
	for(int i = 0; i < v.size(); ++i) {
		temp =  v[i];
		j = i-1;
		while(j >= 0 && v[j] > temp) {
			v[j+1] = v[j];
			j--;
		}
		v[j + 1] = temp;
	}
	return;
}

int main(int argc, char const *argv[])
{
	
	int n;
	std::cin >> n;
	std::vector<int> v;
	int temp;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		v.push_back(temp);
	}
	sort(v);

	for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;


	return 0;
}
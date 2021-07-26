
// Note- Binary search can only be iplemented when the array is SORTED

#include <iostream>
#include <vector>

//RECURSIVE CODE
int binarySearch1(std::vector<int> &v,int l, int r,int num) {
	if(r >= l) {
		int mid = l + (r - l) / 2;
		if(v[mid] < num)
			return binarySearch1(v, mid+1, r, num);
		if(v[mid] > num)
			return binarySearch1(v, l, mid-1, num);
		return mid+1;
	}
	return -1;
}

// ITERATIVE CODE
int binarySearch2(std::vector<int> &v, int key) {
	int l = 0, r = v.size()-1, mid;

	while(r >= l) {
		mid = l + (r - l) / 2;
		if(v[mid] < key)
			l = mid+1;
		else if(v[mid] > key)
			r = mid-1;
		return mid+1;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n;
	std::vector<int> v;
	std::cin >> n;
	int temp;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		v.push_back(temp);
	}

	int num;
	std::cin >> num;
	std::cout << binarySearch1(v, 0, v.size()-1, num) << std::endl;
	std::cout << binarySearch2(v, num) << std::endl;


	return 0;
}
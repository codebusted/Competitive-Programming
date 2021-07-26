#include <iostream>

int main(int argc, char const *argv[])
{
	int arr[6][6];
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 6; j++)
			std::cin >> arr[i][j];
	}

	int maxSum = 0;
	int sum;
	for(int i = 0; i < 6-2; i++) {
		for(int j = 0; j < 6-2; j++) {
			sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
			sum += arr[i+1][j+1];
			sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

			if(sum > maxSum || (i == 0 && j == 0))
				maxSum = sum;
		}
	}

	std::cout << maxSum << std::endl;

	return 0;
}
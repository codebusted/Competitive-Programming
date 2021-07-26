#include <iostream>

void time(int N, int H, int x, int t[]) {

	if(x >= H) {
		std::cout << "Yes" << std::endl;
		return;
	}
	int diff = H - x;
	for(int i = 0; i < N; i++) {
		if(t[i] >= diff) {
			std::cout << "Yes" << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
	return;
}

int main(int argc, char const *argv[])
{
	int N, H, x;

	std::cin >> N;
	std::cin >> H;
	std::cin >> x;

	int t[N];

	for(int i = 0; i < N; i++) {
		std::cin >> t[i];
	}

	time(N, H, x, t);

	return 0;
}
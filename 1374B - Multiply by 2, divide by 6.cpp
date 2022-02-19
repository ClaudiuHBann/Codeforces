#include <iostream>

int main() {
	int t;
	std::cin >> t;

	for(size_t i = 0; i < t; i++) {
		long long n;
		std::cin >> n;

		int moves = 0;
		while(n != 1) {
			moves++;

			n = (n % 6 == 0) ? n / 6 : n * 2;

			if(n > INT32_MAX) {
				moves = -1;
				break;
			}
		}

		std::cout << moves << std::endl;
	}

	return 0;
}

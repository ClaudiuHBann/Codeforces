#include <iostream>
#include <math.h>

int main() {
	int t;
	std::cin >> t;

	for(size_t i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		for(size_t x = 1; x < 333333333; x++)
			for(size_t k = 2, p; (p = x * ((int)pow(2, k) - 1)) <= n; k++)
				if(n % p == 0) {
					std::cout << n / p << std::endl;
					
					x = 333333333;
					break;
				}
	}

	return 0;
}

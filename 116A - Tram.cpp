#include <iostream>

int main() {
	int stops;
	std::cin >> stops;

	int minimumCapacity = 0, passagers = 0;
	for(size_t i = 0; i < stops; i++) {
		int a, b;
		std::cin >> a >> b;

		passagers = passagers - a + b;
		if(minimumCapacity < passagers)
			minimumCapacity = passagers;
	}

	std::cout << minimumCapacity;

	return 0;
}

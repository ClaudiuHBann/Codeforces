#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;

	int days = 0;
	while(n--)
		if(++days % m == 0)
			n++;

	std::cout << days;

	return 0;
}

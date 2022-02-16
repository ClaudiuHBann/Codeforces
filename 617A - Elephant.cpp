#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	int steps = 0;
	while (x > 0)
	{
		x -= (x % 5 == 0) ? 5 : x % 5 + 1;
		steps++;
	}

	std::cout << steps;

	return 0;
}

#include <iostream>

int main()
{
	unsigned long long number, position;
	std::cin >> number >> position;

	std::cout << ((position <= (number + 1) / 2) ? position * 2 - 1 : (position - (number + 1) / 2) * 2);

	return 0;
}

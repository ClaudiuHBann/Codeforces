#include <iostream>

int main()
{
	unsigned short boardLines, boardColumns;
	std::cin >> boardLines >> boardColumns;

	std::cout << boardLines * boardColumns / 2;

	return 0;
}

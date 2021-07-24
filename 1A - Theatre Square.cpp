#include <iostream>

int main()
{
	unsigned long long rectangleLength, rectangleWidth, flagstoneSize;
	std::cin >> rectangleLength >> rectangleWidth >> flagstoneSize;

	std::cout << (rectangleLength / flagstoneSize + ((rectangleLength % flagstoneSize != 0) ? 1 : 0)) *
				 (rectangleWidth / flagstoneSize + ((rectangleWidth % flagstoneSize != 0) ? 1 : 0));

	return 0;
}

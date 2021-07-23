#include <iostream>

int main()
{
	unsigned short numberOfHorizontalSticks, numberOfVerticalSticks;
	std::cin >> numberOfHorizontalSticks >> numberOfVerticalSticks;

	if (numberOfHorizontalSticks > numberOfVerticalSticks)
	{
		std::cout << ((numberOfVerticalSticks % 2 == 0) ? "Malvika" : "Akshat");
	}
	else
	{
		std::cout << ((numberOfHorizontalSticks % 2 == 0) ? "Malvika" : "Akshat");
	}

	return 0;
}

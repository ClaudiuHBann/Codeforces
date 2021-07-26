#include <iostream>

int main()
{
	unsigned short value1, value2, value3;
	std::cin >> value1 >> value2 >> value3;

	if (value1 != 1 &&
		value2 != 1 &&
		value3 != 1)
	{
		std::cout << value1 * value2 * value3;
	}
	else if ((value1 == 1 && value2 == 1 && value3 == 1) ||
		(value1 == 1 && value3 == 1))
	{
		std::cout << value1 + value2 + value3;
	}
	else
	{
		if (value1 == 1)
		{
			std::cout << (value1 + value2) * value3;
		}
		else if (value3 == 1)
		{
			std::cout << value1 * (value2 + value3);
		}
		else
		{
			std::cout << ((value1 < value3) ? (value1 + value2) * value3 : value1 * (value2 + value3));
		}
	}

	return 0;
}

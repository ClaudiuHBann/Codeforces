#include <iostream>

int main()
{
	unsigned char line, column;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			unsigned char element;
			std::cin >> element;

			if (element - '0' == 1)
			{
				line = i + 1;
				column = j + 1;
			}
		}
	}

	std::cout << abs(line - 3) + abs(column - 3);

	return 0;
}

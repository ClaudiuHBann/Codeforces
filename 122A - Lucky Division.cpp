#include <iostream>

int main()
{
	unsigned short luckyNumbers[] = { 4, 44, 444, 7, 77, 777, 47, 74, 447, 474, 774, 747 };
	unsigned short number;
	std::cin >> number;

	unsigned short numberCopy = number;
	bool isLuckyNumber = true;
	while (numberCopy != 0)
	{
		if (numberCopy % 10 != 4 &&
			numberCopy % 10 != 7)
		{
			isLuckyNumber = false;
			break;
		}
		else
		{
			numberCopy /= 10;
		}
	}

	if (isLuckyNumber)
	{
		std::cout << "YES";
	}
	else
	{
		bool isAlmostLuckyNumber = false;
		for (int i = 0; i < 12; i++)
		{
			if (number % luckyNumbers[i] == 0)
			{
				isAlmostLuckyNumber = true;
				break;
			}
		}

		std::cout << ((isAlmostLuckyNumber) ? "YES" : "NO");
	}

	return 0;
}

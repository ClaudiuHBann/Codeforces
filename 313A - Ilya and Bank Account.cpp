#include <iostream>

int main()
{
	int bankAccountValue;
	std::cin >> bankAccountValue;

	if (bankAccountValue >= 0)
	{
		std::cout << bankAccountValue;
	}
	else
	{
		int bankAccountValue1 = bankAccountValue / 10;
		int bankAccountValue2 = bankAccountValue / 100 * 10 + bankAccountValue % 10;

		std::cout << ((bankAccountValue1 > bankAccountValue2) ? bankAccountValue1 : bankAccountValue2);
	}

	return 0;
}

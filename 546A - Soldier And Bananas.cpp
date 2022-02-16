#include <iostream>

int main()
{
	int firstBananaPrice, money, bananasToBuy;
	std::cin >> firstBananaPrice >> money >> bananasToBuy;

	int nextBananaPrice = firstBananaPrice;
	for (size_t i = 0; i < bananasToBuy; i++)
	{
		money -= nextBananaPrice;
		nextBananaPrice += firstBananaPrice;
	}

	std::cout << ((money < 0) ? -money : 0);

	return 0;
}

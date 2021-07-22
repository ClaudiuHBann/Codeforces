#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	unsigned short numberOfCoins = 0;
	std::cin >> numberOfCoins;

	unsigned short sumOfCoinsOnTable = 0;
	std::vector<unsigned short> coinValues;
	for (int i = 0; i < numberOfCoins; i++)
	{
		unsigned short newCoinValue;
		std::cin >> newCoinValue;

		sumOfCoinsOnTable += newCoinValue;
		coinValues.push_back(newCoinValue);
	}

	std::sort(coinValues.begin(), coinValues.end());

	unsigned short sumOfTakenCoins = 0;
	unsigned char numberOfTakenCoins = 0;
	for (int i = coinValues.size() - 1; i >= 0; i--)
	{
		sumOfCoinsOnTable -= coinValues[i];
		sumOfTakenCoins += coinValues[i];

		if (sumOfTakenCoins > sumOfCoinsOnTable)
		{
			numberOfTakenCoins = coinValues.size() - i;
			break;
		}
	}

	std::cout << (int)numberOfTakenCoins;

	return 0;
}

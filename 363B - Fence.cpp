#include <iostream>
#include <vector>

int main()
{
	uint32_t n, k;
	std::cin >> n >> k;

	uint16_t nextHeight = 0;
	uint32_t lastSum = 0;
	std::vector<uint8_t> lastKHeights;
	for (uint32_t i = 0; i < k; i++)
	{
		std::cin >> nextHeight;

		lastKHeights.push_back(nextHeight);
		lastSum += nextHeight;
	}

	uint32_t bestIndex = 1, sumOfTheNextKSpot = lastSum;
	for (uint32_t i = k; i < n; i++)
	{
		std::cin >> nextHeight;

		sumOfTheNextKSpot += nextHeight;
		sumOfTheNextKSpot -= lastKHeights[0];

		lastKHeights.erase(lastKHeights.begin());
		lastKHeights.push_back(nextHeight);

		if (sumOfTheNextKSpot < lastSum)
		{
			lastSum = sumOfTheNextKSpot;
			bestIndex = i + 1 - k + 1;
		}
	}

	std::cout << bestIndex;

	return 0;
}

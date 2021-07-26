#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	unsigned int kiritoStrength;
	unsigned short numberOfDragons;
	std::cin >> kiritoStrength >> numberOfDragons;

	std::vector<std::pair<unsigned short, unsigned short>> dragons;
	for (int i = 0; i < numberOfDragons; i++)
	{
		unsigned short dragonsStrength, dragonsStrengthBonus;
		std::cin >> dragonsStrength >> dragonsStrengthBonus;

		dragons.push_back(std::pair<unsigned short, unsigned short>(dragonsStrength, dragonsStrengthBonus));
	}

	std::sort(dragons.begin(), dragons.end());

	bool goToNextLevel = true;
	for (int i = 0; i < dragons.size(); i++)
	{
		if (dragons[i].first >= kiritoStrength)
		{
			goToNextLevel = false;
			break;
		}
		else
		{
			kiritoStrength += dragons[i].second;
		}
	}

	std::cout << ((goToNextLevel) ? "YES" : "NO");

	return 0;
}

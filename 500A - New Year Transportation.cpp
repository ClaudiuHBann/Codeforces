#include <iostream>
#include <vector>

int main()
{
	unsigned short numberOfCells, destinationCellIndex;
	std::cin >> numberOfCells >> destinationCellIndex;

	std::vector<unsigned short> portals;
	for (int i = 0; i < numberOfCells - 1; i++)
	{
		unsigned short nextPortalIndex;
		std::cin >> nextPortalIndex;

		portals.push_back(nextPortalIndex);
	}

	unsigned short currentIndex = 1;
	for (int i = 0; i < portals.size(); i++)
	{
		if (currentIndex == destinationCellIndex)
		{
			break;
		}

		currentIndex = i + portals[i] + 1;
	}

	std::cout << ((currentIndex == destinationCellIndex) ? "YES" : "NO");

	return 0;
}

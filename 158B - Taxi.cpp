#include <iostream>

int main()
{
	unsigned int numberOfGroups;
	std::cin >> numberOfGroups;

	int groupsOfOne = 0;
	unsigned int groupsOfTwo = 0;
	unsigned int groupsOfThree = 0;
	unsigned int groupsOfFour = 0;
	for (int i = 0; i < numberOfGroups; i++)
	{
		unsigned char childrenPerGroup;
		std::cin >> childrenPerGroup;

		switch (childrenPerGroup - '0')
		{
		case 1:
			groupsOfOne++;
			break;
		case 2:
			groupsOfTwo++;
			break;
		case 3:
			groupsOfThree++;
			break;
		case 4:
			groupsOfFour++;
			break;
		}
	}

	unsigned int numberOfTaxisNeedded = groupsOfFour + groupsOfThree + groupsOfTwo / 2;
	groupsOfOne -= groupsOfThree;

	if (groupsOfTwo % 2 == 1)
	{
		numberOfTaxisNeedded++;
		groupsOfOne -= 2;
	}

	if (groupsOfOne > 0)
	{
		numberOfTaxisNeedded += (groupsOfOne + 3) / 4;
	}

	std::cout << numberOfTaxisNeedded;

	return 0;
}

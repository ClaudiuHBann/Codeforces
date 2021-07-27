#include <iostream>
#include <vector>

int main()
{
	unsigned int numberOfHouses, numberOfTasks;
	std::cin >> numberOfHouses >> numberOfTasks;

	std::vector<unsigned int> houseNumbers;
	for (int i = 0; i < numberOfTasks; i++)
	{
		unsigned int newHouseNumber;
		std::cin >> newHouseNumber;
		newHouseNumber--;

		houseNumbers.push_back(newHouseNumber);
	}

	unsigned long long timeNeeded = 0, lastElement = 0;
	for (int i = 0; i < numberOfTasks; i++)
	{
		timeNeeded += (houseNumbers[i] >= lastElement) ? houseNumbers[i] - lastElement : numberOfHouses - (lastElement - houseNumbers[i]);
		lastElement = houseNumbers[i];
	}

	std::cout << timeNeeded;

	return 0;
}

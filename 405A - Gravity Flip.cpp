#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	unsigned short numberOfColumns;
	std::cin >> numberOfColumns;

	std::vector<unsigned short> cubesPerColumn;
	for (int i = 0; i < numberOfColumns; i++)
	{
		unsigned short cubesPerCurrentColumn;
		std::cin >> cubesPerCurrentColumn;

		cubesPerColumn.push_back(cubesPerCurrentColumn);
	}

	std::sort(cubesPerColumn.begin(), cubesPerColumn.end());

	for (int i = 0; i < numberOfColumns; i++)
	{
		std::cout << cubesPerColumn[i] << ((i != numberOfColumns - 1) ? " " : "");
	}

	return 0;
}

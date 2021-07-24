#include <iostream>

int main()
{
	unsigned short numberOfPositions;
	std::cin >> numberOfPositions;

	short** positions = new short* [numberOfPositions];
	for (int i = 0; i < numberOfPositions; i++)
	{
		positions[i] = new short[3];
	}

	for (int i = 0; i < numberOfPositions; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> positions[i][j];
		}
	}

	bool ok = true;
	for (int i = 0; i < 3; i++)
	{
		short sum = 0;
		for (int j = 0; j < numberOfPositions; j++)
		{
			sum += positions[j][i];
		}

		if (sum != 0)
		{
			ok = false;
			break;
		}
	}

	std::cout << ((ok) ? "YES" : "NO");

	for (int i = 0; i < numberOfPositions; i++)
	{
		delete[] positions[i];
	}

	delete[] positions;

	return 0;
}

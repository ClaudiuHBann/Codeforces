#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	unsigned short numberOfStudents, numberOfPuzzels;
	std::cin >> numberOfStudents >> numberOfPuzzels;

	std::vector<unsigned short> piecesInAPuzzle;
	for (int i = 0; i < numberOfPuzzels; i++)
	{
		unsigned short numberOfPiecesInCurrentPuzzle;
		std::cin >> numberOfPiecesInCurrentPuzzle;

		piecesInAPuzzle.push_back(numberOfPiecesInCurrentPuzzle);
	}

	std::sort(piecesInAPuzzle.begin(), piecesInAPuzzle.end());

	unsigned short smallestDifference = piecesInAPuzzle[numberOfStudents - 1] - piecesInAPuzzle[0];
	for (int i = 1; i <= numberOfPuzzels - numberOfStudents; i++)
	{
		if (piecesInAPuzzle[i + numberOfStudents - 1] - piecesInAPuzzle[i] < smallestDifference)
		{
			smallestDifference = piecesInAPuzzle[i + numberOfStudents - 1] - piecesInAPuzzle[i];
		}
	}

	std::cout << smallestDifference;

	return 0;
}

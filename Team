#include <iostream>

int main()
{
	unsigned short numberOfProblems;
	std::cin >> numberOfProblems;

	unsigned short numberOfImplementedProblems = 0;

	for (int i = 0; i < numberOfProblems; i++)
	{
		char solutions[3];
		std::cin >> solutions[0] >> solutions[1] >> solutions[2];
		
		if (solutions[0] - '0' +
			solutions[1] - '0' +
			solutions[2] - '0' >= 2
			)
		{
			numberOfImplementedProblems++;
		}
	}

	std::cout << numberOfImplementedProblems;

	return 0;
}

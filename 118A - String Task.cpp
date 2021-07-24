#include <iostream>
#include <string>

int main()
{
	std::string inputString;
	std::cin >> inputString;

	std::string outputString;
	for (int i = 0; i < inputString.length(); i++)
	{
		if (inputString[i] >= 65 && inputString[i] <= 90)
		{
			inputString[i] = tolower(inputString[i]);
		}

		if (inputString[i] != 'a' &&
			inputString[i] != 'o' &&
			inputString[i] != 'y' &&
			inputString[i] != 'e' &&
			inputString[i] != 'u' &&
			inputString[i] != 'i')
		{
			outputString += '.';
			outputString += inputString[i];
		}
	}

	std::cout << outputString;

	return 0;
}

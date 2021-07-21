#include <iostream>
#include <string>

int main()
{
	std::string stringOne, stringTwo;
	std::cin >> stringOne >> stringTwo;

	for (int i = 0; i < stringOne.length(); i++)
	{
		if (toupper(stringOne[i]) != toupper(stringTwo[i]))
		{
			std::cout << ((toupper(stringOne[i]) > toupper(stringTwo[i])) ? "1" : "-1");
			return 0;
		}
	}

	std::cout << '0';

	return 0;
}

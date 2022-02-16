#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	int uppercaseLettersCount = 0;
	for (size_t i = 0; i < input.length(); i++)
		if (isupper(input[i]) && ++uppercaseLettersCount > input.length() / 2)
			break;

	if (uppercaseLettersCount > input.length() / 2)
		for (size_t i = 0; i < input.length(); i++)
			if (islower(input[i]))
				input[i] = toupper(input[i]);
	else
		for (size_t i = 0; i < input.length(); i++)
			if (isupper(input[i]))
				input[i] = tolower(input[i]);

	std::cout << input;

	return 0;
}

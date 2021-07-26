#include <iostream>
#include <string>

int main()
{
	std::string word;
	std::cin >> word;

	if (word.length() == 1)
	{
		word[0] = (isupper(word[0])) ? tolower(word[0]) : toupper(word[0]);
	}

	for (int i = 1; i < word.length(); i++)
	{
		if (islower(word[i]))
		{
			break;
		}

		if (i == word.length() - 1 && isupper(word[i]))
		{
			for (int j = 0; j < word.length(); j++)
			{
				word[j] = (isupper(word[j])) ? tolower(word[j]) : toupper(word[j]);
			}
		}
	}

	std::cout << word;

	return 0;
}

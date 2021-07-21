#include <iostream>
#include <list>
#include <string>

int main()
{
	unsigned short numberOfWords;
	std::cin >> numberOfWords;

	std::list<std::string> wordsList;

	for (int i = 0; i < numberOfWords; i++)
	{
		std::string newWord;
		std::cin >> newWord;
		
		(newWord.length() > 10) ?
			wordsList.push_back(
				newWord[0] +
				std::to_string(newWord.length() - 2) +
				newWord[newWord.length() - 1]
			)
			:
			wordsList.push_back(newWord);
	}

	for (auto &i: wordsList)
	{
		std::cout << i << std::endl;
	}

	return 0;
}

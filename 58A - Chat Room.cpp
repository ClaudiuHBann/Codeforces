#include <iostream>
#include <string>

int main()
{
	std::string word, hello("hello");
	std::cin >> word;

	unsigned char helloIterator = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == hello[helloIterator])
		{
			helloIterator++;

			if (helloIterator == hello.length())
			{
				break;
			}
		}
	}

	std::cout << ((helloIterator == hello.length()) ? "YES" : "NO");
	
	return 0;
}

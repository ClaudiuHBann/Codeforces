#include <iostream>
#include <string>

int main()
{
	std::string footballPlayers;
	std::cin >> footballPlayers;

	if (footballPlayers.length() < 7)
	{
		std::cout << "NO";
		return 0;
	}

	bool isDangerous = false;
	unsigned char playersInARow = 0;
	for (int i = 0; i < footballPlayers.length(); i++)
	{
		(footballPlayers[i] == footballPlayers[i + 1]) ? playersInARow++ : playersInARow = 0;

		if (playersInARow == 6)
		{
			isDangerous = true;
			break;
		}

		if (i >= footballPlayers.length() - 7 &&
			footballPlayers[i] != footballPlayers[i + 1])
		{
			break;
		}
	}

	std::cout << ((isDangerous) ? "YES" : "NO");

	return 0;
}

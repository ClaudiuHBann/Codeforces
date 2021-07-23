#include <iostream>
#include <string>

int main()
{
	std::string remixedSong;
	std::cin >> remixedSong;

	std::string song;
	bool once = false;
	for (int i = 0; i < remixedSong.length(); i++)
	{
		if (remixedSong[i] == 'W' &&
			remixedSong[i + 1] == 'U' &&
			remixedSong[i + 2] == 'B')
		{
			i += 2;

			if (!song.empty() && once)
			{
				song += ' ';
				once = false;
			}
		}
		else
		{
			song += remixedSong[i];
			once = true;
		}
	}

	std::cout << song;

	return 0;
}

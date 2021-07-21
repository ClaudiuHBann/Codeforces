#include <iostream>

int main()
{
	unsigned short numberOfParticipants, vsParticipant;
	std::cin >> numberOfParticipants >> vsParticipant;

	unsigned short* participantsScores = new unsigned short[numberOfParticipants];
	for (int i = 0; i < numberOfParticipants; i++)
	{
		std::cin >> participantsScores[i];
	}

	unsigned char numberOfAdvancers = 0;
	for (int i = 0; i < numberOfParticipants; i++)
	{
		if (participantsScores[i] == 0)
		{
			break;
		}

		if (participantsScores[i] >= participantsScores[vsParticipant - 1])
		{
			numberOfAdvancers++;
		}
	}

	delete[] participantsScores;

	std::cout << (int)numberOfAdvancers;

	return 0;
}

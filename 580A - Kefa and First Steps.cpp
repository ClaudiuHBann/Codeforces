#include <iostream>

int main()
{
	unsigned int numberOfDays;
	std::cin >> numberOfDays;

	unsigned int previousDayMoney, progressDayStreak = 1, biggestProgressDayStreak = 1;
	for (int i = 0; i < numberOfDays; i++)
	{
		unsigned int moneyPerDay;
		std::cin >> moneyPerDay;

		if (i > 0)
		{
			if (previousDayMoney <= moneyPerDay)
			{
				progressDayStreak++;

				if (biggestProgressDayStreak < progressDayStreak)
				{
					biggestProgressDayStreak = progressDayStreak;
				}
			}
			else
			{
				progressDayStreak = 1;
			}
		}

		previousDayMoney = moneyPerDay;
	}

	std::cout << biggestProgressDayStreak;

	return 0;
}

#include <iostream>

int main()
{
	uint16_t t;
	std::cin >> t;

	uint16_t a;
	for (uint16_t i = 0; i < t; i++)
	{
		std::cin >> a;

		if (a < 60)
		{
			std::cout << "NO\n";
			continue;
		}

		bool exists = false;
		for (uint64_t j = 3; j < 1000; j++)
		{
			double anglesSum = (j - 2) * 180.0 / j;

			if (a == anglesSum)
			{
				exists = true;
				break;
			}

			if (a < anglesSum)
			{
				break;
			}
		}

		std::cout << ((exists) ? "YES\n" : "NO\n");
	}

	return 0;
}

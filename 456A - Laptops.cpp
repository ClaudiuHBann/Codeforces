#include <iostream>

int main()
{
	uint32_t n;
	std::cin >> n;

	uint32_t a, b;
	bool isHappy = false;
	for (uint32_t i = 0; i < n; i++)
	{
		std::cin >> a >> b;

		if (a != b)
		{
			isHappy = true;
			break;
		}
	}

	std::cout << ((isHappy) ? "Happy Alex" : "Poor Alex");
}

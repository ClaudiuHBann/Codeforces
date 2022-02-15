#include <iostream>
#include <string>

int main()
{
	int n;
	std::string input;
	std::cin >> n >> input;

	if (input.length() < 2)
	{
		std::cout << "0";
		return 0;
	}

	n = 0;
	for (size_t i = 0; i <= input.length() - 2; i++)
		if (input[i] == input[i + 1])
			n++;

	std::cout << n;

	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
	std::string sum;
	std::cin >> sum;

	std::vector<unsigned short> sumNumbers;
	for (int i = 0; i < sum.length(); i += 2)
	{
		sumNumbers.push_back(sum[i] - '0');
	}

	std::sort(sumNumbers.begin(), sumNumbers.end());

	for (int i = 0; i < sum.length(); i += 2)
	{
		sum[i] = sumNumbers[i / 2] + '0';
	}

	std::cout << sum;

	return 0;
}

#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	char numberOfApperances[26] = { 0 };
	int zeroDiffElements = 26;
	for (size_t i = 0; i < input.length(); i++)
		if (!numberOfApperances[input[i] - 97]++)
			zeroDiffElements--;

	std::cout << ((zeroDiffElements % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");

	return 0;
}

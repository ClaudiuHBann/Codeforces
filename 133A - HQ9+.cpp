#include <iostream>
#include <string>

int main()
{
	std::string instructions;
	std::cin >> instructions;

	bool atLeastOneInstruction = false;
	for (int i = 0; i < instructions.length(); i++)
	{
		if (instructions[i] == 'H' ||
			instructions[i] == 'Q' ||
			instructions[i] == '9')
		{
			atLeastOneInstruction = true;
			break;
		}
	}

	std::cout << ((atLeastOneInstruction) ? "YES" : "NO");

	return 0;
}

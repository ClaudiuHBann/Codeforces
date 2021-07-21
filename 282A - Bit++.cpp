#include <iostream>

int main()
{
	unsigned short numberOfStatements;
	std::cin >> numberOfStatements;
  std::cin.ignore(1, '/n');
  
	int x = 0;
	for (int i = 0; i < numberOfStatements; i++)
	{
		char newStatement[32];
		std::cin.getline(newStatement, 32);
		
		(newStatement[1] == '-') ? x-- : x++;
	}

	std::cout << x;

	return 0;
}

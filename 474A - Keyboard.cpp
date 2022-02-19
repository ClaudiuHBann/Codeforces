#include <iostream>
#include <string>

int main() {
	char keyboard[3][10] = {
		{ 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' } ,
		{ 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';' } ,
		{ 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/' }
	};

	char lOrR;
	std::string s;
	std::cin >> lOrR >> s;

	for(size_t i = 0; i < s.length(); i++)
		for(size_t j = 0; j < 3; j++)
			for(size_t k = 0; k < 10; k++)
				if(s[i] == keyboard[j][k]) {
					std::cout << keyboard[j][k + (lOrR == 'R' ? -1 : 1)];

					j = 3;
					break;
				}

	return 0;
}

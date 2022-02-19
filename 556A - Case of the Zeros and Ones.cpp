#include <iostream>
#include <string>

int main() {
	int nrOf0;
	std::string s;
	std::cin >> nrOf0 >> s;

	int nrOf1 = nrOf0 = 0;
	for(size_t i = 0; i < s.length(); i++)
		(s[i] == '0') ? nrOf0++ : nrOf1++;

	std::cout << s.length() - ((nrOf0 > nrOf1) ? nrOf1 : nrOf0) * 2;

	return 0;
}

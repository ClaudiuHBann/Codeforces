#include <iostream>
#include <string>

int main() {
	int n, t;
	std::string s;
	std::cin >> n >> t >> s;

	int lastGirlFromLeft = 0;
	for(size_t i = 0; i < n; i++) {
		if(s[i] == 'B')
			break;

		lastGirlFromLeft++;
	}

	while(t--) {
		bool allSeparated = true;
		for(size_t i = lastGirlFromLeft; i < n - 1; i++)
			if(s[i] != s[i + 1])
				allSeparated = false;

		if(allSeparated)
			break;

		for(size_t i = lastGirlFromLeft; i < n - 1; i++)
			if(s[i] != s[i + 1] && s[i] == 'B') {
				std::swap(s[i], s[i + 1]);

				if(i++ == lastGirlFromLeft)
					lastGirlFromLeft++;
			}
	}

	std::cout << s;

	return 0;
}

#include <iostream>

int main() {
	long long n;
	std::cin >> n;

	int nrOfLuckyDigits = 0;
	while(n) {
		if(n % 10 == 7 || n % 10 == 4)
			nrOfLuckyDigits++;

		n /= 10;
	}

	std::cout << ((nrOfLuckyDigits % 10 == 7 || nrOfLuckyDigits % 10 == 4) ? "YES" : "NO");

	return 0;
}

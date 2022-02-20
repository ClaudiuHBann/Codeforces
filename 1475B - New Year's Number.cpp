#include <iostream>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr);

int main() {
	FAST_IO();

	int t;
	std::cin >> t;

	while(t--) {
		int n;
		std::cin >> n;

		std::cout << ((n % 2020 <= n / 2020) ? "YES" : "NO") << std::endl;
	}

	return 0;
}

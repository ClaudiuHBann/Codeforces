#include <iostream>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr);

int main() {
	FAST_IO();

	LL n, t;
	std::cin >> t;

	while(t--) {
		std::cin >> n;

		if(n & 1) {
			std::cout << "YES" << std::endl;
			continue;
		}

		LL div = n;
		bool ok = false;
		while(div > 2) {
			div /= 2;

			if(div & 1 && n % div == 0) {
				ok = true;
				break;
			}
		}

		std::cout << ((ok) ? "YES" : "NO") << std::endl;
	}

	return 0;
}

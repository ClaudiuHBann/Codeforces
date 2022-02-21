#include <iostream>
 
#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

int main() {
	FAST_IO();

	int t;
	std::cin >> t;

	while(t--) {
		LL n;
		std::cin >> n;

		int moves = 0;
		while(n != 1)
			if(n % 6 == 0) {
				n /= 6;
				moves++;
			} else if(n % 3 == 0) {
				n *= 2;
				n /= 6;
				moves += 2;
			} else {
				moves = -1;
				break;
			}

		std::cout << moves << std::endl;
	}

	return 0;
}

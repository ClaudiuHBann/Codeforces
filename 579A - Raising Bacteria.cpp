#include <iostream>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

int main() {
	FAST_IO();

	int x;
	std::cin >> x;

	int bacterias = 1;
	while(x != 1)
		if(x % 2 == 0)
			x /= 2;
		else
			x--, bacterias++;

	std::cout << bacterias;

	return 0;
}

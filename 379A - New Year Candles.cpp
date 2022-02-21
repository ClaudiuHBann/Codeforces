#include <iostream>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

int main() {
	FAST_IO();

	int a, b;
	std::cin >> a >> b;

	int hours = a;
	while(true) {
		int AdivB = a / b;

		hours += AdivB;
		a = AdivB + a % b;

		if(a < b)
			break;
	}

	std::cout << hours;

	return 0;
}

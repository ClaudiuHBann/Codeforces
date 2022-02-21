#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr);

int main() {
	FAST_IO();

	int n, m;
	std::cin >> n >> m;
	std::vector<int> tvs(n);
	for(size_t i = 0; i < n; i++)
		std::cin >> tvs[i];

	std::sort(tvs.begin(), tvs.end());

	int sum = 0;
	for(size_t i = 0; i < m; i++)
		if(sum + tvs[i] < sum)
			sum += tvs[i];
		else
			break;

	std::cout << abs(sum);

	return 0;
}

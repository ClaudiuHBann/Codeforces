#include <iostream>
#include <vector>

int main() {
	int n, m;
	std::cin >> n >> m;
	std::vector<int> tvs(n);
	for(size_t i = 0; i < n; i++)
		std::cin >> tvs[i];

	std::vector<int> v(m);
	for(size_t i = 0; i < m; i++)
		v[i] = tvs[i];

	for(size_t i = m; i < n; i++) {
		int indexOfBiggest = 0;
		for(size_t j = 1; j < m; j++)
			if(v[indexOfBiggest] < v[j])
				indexOfBiggest = j;

		if(tvs[i] < v[indexOfBiggest])
			v[indexOfBiggest] = tvs[i];
	}

	int sum = 0;
	for(size_t i = 0; i < m; i++)
		if(sum + v[i] < sum)
			sum += v[i];

	std::cout << abs(sum);

	return 0;
}

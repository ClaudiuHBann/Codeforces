#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> x(n, 0);
	for (int i = 0; i < n; i++)
	{
		std::cin >> x[i];
	}

	std::sort(x.begin(), x.end());

	int q;
	std::cin >> q;

	for (int i = 0; i < q; i++)
	{
		long long m;
		std::cin >> m;

		std::cout << std::upper_bound(x.begin(), x.end(), m) - x.begin();
		if (i != q - 1)
		{
			std::cout << std::endl;
		}
	}

	return 0;
}

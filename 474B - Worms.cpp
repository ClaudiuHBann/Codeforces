#include <iostream>

#include <string>
#include <vector>
#include <map>

#include <algorithm>
#include <math.h>

using namespace std;

#define ll long long
#define pb push_back

#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>

#define co(condition, left, right) ((condition) ? (left) : (right))
#define NEXT(type) NextT<type>()

#define BUG(object) cout << endl << "\x1B[31mBUG(" << #object << " = " << object << ")\x1B[0m" << endl;
#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

template<typename T>
T NextT() {
	T nextT;
	cin >> nextT;
	return nextT;
}

int main() {
	FAST_IO();

	int n = NEXT(int);
	vi v(n + 1);
	for(size_t i = 1; i <= n; i++)
		v[i] = NEXT(int) + v[i - 1];

	int m = NEXT(int);
	while(m--) {
		int q = NEXT(int), r = n, l = 0, m;
		while(l <= r) {
			m = l + (r - l) / 2;
			if(v[m] + 1 <= q && q <= v[m + 1])
				break;
			else if(v[m] < q)
				l = m + 1;
			else
				r = m - 1;
		}

		cout << m + 1 << endl;
	}

	return 0;
}

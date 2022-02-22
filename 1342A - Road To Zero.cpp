#include <iostream>

#include <string>
#include <vector>

#include <algorithm>
#include <math.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define pb push_back

#define vi vector<int>

#define bug(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int t;
	cin >> t;

	while(t--) {
		ll x, y, a, b, dollars = 0;
		cin >> x >> y >> a >> b;

		if(x < y)
			swap(x, y);

		if(x != 0 && y != 0) {
			x -= y;
			dollars += (b < 2 * a) ? b * y : a * 2 * y;
			y = 0;
		}

		if((x == 0 && y != 0) || (y == 0 && x != 0))
			dollars += x * a;

		cout << dollars << endl;
	}

	return 0;
}

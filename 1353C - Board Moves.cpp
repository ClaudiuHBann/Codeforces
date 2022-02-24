#include <iostream>

#include <string>
#include <vector>
#include <map>

#include <algorithm>
#include <math.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define pb push_back

#define vi vector<int>

#define co(condition, left, right) ((condition) ? left : right)

#define bug(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		long long nn = n / 2;
		cout << 8 * (nn * (nn + 1) * (2 * nn + 1) / 6) << endl;
	}

	return 0;
}

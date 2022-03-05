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

	int t = NEXT(int);
	while(t--) {
		int x = NEXT(int), n = NEXT(int), m = NEXT(int);

		double f;
		while(n-- != 0 && (f = floor(x / 2) + 10) < x)
			x = f;
		while(m-- != 0 && x > 0)
			x -= 10;

		cout << co(x > 0, "NO", "YES") << endl;
	}

	return 0;
}

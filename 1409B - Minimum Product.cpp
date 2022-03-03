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
#define next(type) NextT<type>()

#define BUG(object) cout << endl << "BUG(" << #object << " = " << object << ")" << endl;
#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

template<typename T>
T NextT() {
	T nextT;
	cin >> nextT;
	return nextT;
}

int main() {
	FAST_IO();

	int t = next(int);
	while(t--) {
		ll a = next(int), b = next(int), x = next(int), y = next(int), n = next(int);

		if(b > a)
			swap(a, b), swap(x, y);

		ll diffAX = a - x, diffBY = b - y;

		cout << __min(co(diffBY <= n, a - co(diffAX <= n - diffBY, diffAX, n - diffBY), a) * (b - co(diffBY <= n, diffBY, n)),
					  (a - co(diffAX <= n, diffAX, n)) * co(diffAX <= n, b - co(diffBY <= n - diffAX, diffBY, n - diffAX), b)) << endl;
	}

	return 0;
}

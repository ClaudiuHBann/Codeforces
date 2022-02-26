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

#define co(condition, left, right) ((condition) ? left : right)
#define next(type) NextT<type>()

#define BUG(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;
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
		int a = next(int), b = next(int), emeralds = 0;
		while(a > 1 && b > 1)
			if(a == b) {
				emeralds += a / 3 * 2 + co(a % 3 == 2, 1, 0);
				break;
			} else if(a > b) {
				int c = a - b, cc = 2 * c;
				if(c <= b && cc <= a)
					emeralds += c, a -= cc, b -= c;
				else
					emeralds += b, b = 0;
			} else {
				int c = b - a, cc = 2 * c;
				if(c <= a && cc <= b)
					emeralds += c, b -= cc, a -= c;
				else
					emeralds += a, a = 0;
			}

		cout << emeralds + co((a == 1 && b >= 2) || (b == 1 && a >= 2), 1, 0) << endl;
	}

	return 0;
}

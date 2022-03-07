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
		int n = NEXT(int), k = NEXT(int) - 1, nMINUSk = n - k, nMINUSk2 = n - (k << 1);

		if(n == k + nMINUSk && nMINUSk & 1 && nMINUSk > 0) {
			cout << "YES" << endl;
			for(size_t i = 0; i < k; i++)
				cout << "1 ";
			cout << nMINUSk << endl;
		} else if(n == (k << 1) + nMINUSk2 && (nMINUSk2 & 1) == 0 && nMINUSk2 > 0) {
			cout << "YES" << endl;
			for(size_t i = 0; i < k; i++)
				cout << "2 ";
			cout << nMINUSk2 << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}

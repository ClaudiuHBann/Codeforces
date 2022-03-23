/*
		#				When				Who				Problem			Lang		Verdict		Time	Memory

	150648002	Mar/23/2022 22:15UTC+2	ClaudiuHBann	230B - T-primes		GNU C++14	Accepted	686 ms	3900 KB
*/

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

	vi a(1000000, 0);
	for(size_t i = 2; i <= a.size(); i++)
		if(a[i] == 0)
			for(size_t j = 2; i * j <= a.size(); j++)
				a[i * j] = 1;

	int x = NEXT(int);
	ll b, sq;

	for(size_t i = 0; i < x; i++) {
		b = NEXT(ll);
		sq = sqrt(b);

		if(b == 1)
			cout << "NO" << endl;
		else if(sq * sq == b && a[sq] == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
/*
	------------------------------	My Idea ------------------------------

			Logic:

			Implementation:

			Remarks:

	------------------------------	My Idea ------------------------------
*/

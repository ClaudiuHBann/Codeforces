/*
		#				When				Who						Problem				Lang		Verdict		Time	Memory


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

	int n = NEXT(int);
	mii b;
	for(size_t i = 0; i < n; i++)
		b[NEXT(int)]++;

	cout << prev(b.end())->first - b.begin()->first << " " << co(b.size() > 1, (ll)b.begin()->second * prev(b.end())->second, ((ll)b.begin()->second * (b.begin()->second - 1)) / 2);

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			Implementation:

			Remarks:

	------------------------------	My Idea ------------------------------
*/

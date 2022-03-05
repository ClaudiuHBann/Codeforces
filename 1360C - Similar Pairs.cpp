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
		int n = NEXT(int);

		mii m;
		for(size_t i = 0; i < n; i++)
			m[NEXT(int)]++;

		int numEven = 0, numOdd = 0;
		for(auto var : m)
			co(var.first % 2, numOdd, numEven) += var.second;

		bool ok = false;
		if(numEven % 2 == 0 && numOdd % 2 == 0)
			ok = true;

		if(numOdd % 2 == 1 && numEven % 2 == 1)
			for(auto left = m.begin(), right = next(left); right != m.end() && !ok; left = right++)
				if(left->first + 1 == right->first)
					ok = true;

		cout << co(ok, "YES", "NO") << endl;
	}

	return 0;
}

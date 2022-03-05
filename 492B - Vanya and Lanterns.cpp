#include <iostream>

#include <string>
#include <vector>
#include <map>

#include <algorithm>
#include <math.h>
#include <iomanip>

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

	int n = NEXT(int), l = NEXT(int);

	mii m;
	for(size_t i = 0; i < n; i++)
		m[NEXT(int)]++;

	double biggestDistance = __max(m.begin()->first, l - prev(m.end())->first);
	for(auto left = m.begin(), right = next(left); right != m.end(); left = right++)
		if((double)(right->first - left->first) / 2 > biggestDistance)
			biggestDistance = (double)(right->first - left->first) / 2;

	cout << setprecision(16) << biggestDistance;

	return 0;
}

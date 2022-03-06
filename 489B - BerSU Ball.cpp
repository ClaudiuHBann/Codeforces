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
	vi boys(n);
	for(size_t i = 0; i < n; i++)
		boys[i] = NEXT(int);
	sort(boys.begin(), boys.end());

	int m = NEXT(int);
	vi girls(m);
	for(size_t i = 0; i < m; i++)
		girls[i] = NEXT(int);
	sort(girls.begin(), girls.end());

	int pairs = 0, i = 0, j = 0;
	while(i < n && j < m)
		if(abs(boys[i] - girls[j]) <= 1)
			pairs++, i++, j++;
		else co(boys[i] > girls[j], j++, i++);

	cout << pairs;

	return 0;
}

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

	int n = next(int), m = next(int), k = next(int);
	vector<string> armies(++m, string(n, '0'));

	while(m--) {
		int x = next(int), i = n - 1;
		while(x != 0) {
			armies[m][i--] += x & 1;
			x >>= 1;
		}
	}

	int potentialFriends = 0;
	for(size_t i = 1; i < armies.size(); i++) {
		int differences = 0;
		for(size_t j = 0; j < n; j++)
			if(armies[i][j] != armies[0][j] && ++differences > k)
				break;

		if(differences <= k)
			potentialFriends++;
	}

	cout << potentialFriends;

	return 0;
}

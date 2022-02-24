#include <iostream>

#include <string>
#include <vector>
#include <map>

#include <algorithm>
#include <math.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define pb push_back

#define vi vector<int>

#define co(condition, left, right) ((condition) ? left : right)

#define bug(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int n, m;
	cin >> n >> m;

	if(m > n) {
		cout << -1;
		return 0;
	}

	int moves = n / 2 + n % 2;
	if(moves % m != 0)
		moves += m - moves % m;

	cout << moves;

	return 0;
}

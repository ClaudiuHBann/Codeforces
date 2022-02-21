#include <iostream>

#include <string>
#include <vector>

#include <algorithm>
#include <math.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define pb push_back

#define vi vector<int>

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int n, t;
	cin >> n >> t;

	cout << ((n == 1) ? ((t == 10) ? to_string(-1) : to_string(t)) : to_string(t) + string(n - ((t == 10) ? 2 : 1), '0'));

	return 0;
}

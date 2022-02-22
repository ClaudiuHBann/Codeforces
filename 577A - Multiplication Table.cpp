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

#define bug(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int n, x;
	cin >> n >> x;

	int occurs = 0;
	for(size_t i = 1; i <= n; i++)
		if(x % i == 0 && x / i <= n)
			occurs++;

	cout << occurs;

	return 0;
}

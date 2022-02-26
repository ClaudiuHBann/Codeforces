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
#define next(type) NextT<type>()

#define BUG(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;
#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

template<typename T>
T NextT() {
	T nextT;
	cin >> nextT;
	return nextT;
}

int main() {
	FAST_IO();

	string n = next(string);
	int m = next(int);

	vi v(n.length(), 0);
	for(size_t i = 1, count = 0; i < n.length(); i++) {
		if(n[i] == n[i - 1])
			count++;

		v[i] = count;
	}

	while(m--) {
		int q1 = next(int), q2 = next(int);
		cout << v[q2 - 1] - v[q1 - 1] << endl;
	}

	return 0;
}

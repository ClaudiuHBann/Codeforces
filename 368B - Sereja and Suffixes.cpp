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

	int n = next(int), m = next(int);

	vi v1;
	map<int, int> count;
	for(size_t i = 0; i < n; i++) {
		v1.pb(next(int));

		if(count.find(v1.back()) != count.end())
			count[v1.back()]++;
		else
			count.insert(pair<int, int>(v1.back(), 1));
	}

	vi v2;
	for(size_t i = 0; i < n; i++) {
		v2.pb(count.size());

		if(--count[v1[i]] == 0)
			count.erase(v1[i]);
	}

	while(m--)
		cout << v2[next(int) - 1] << endl;

	return 0;
}

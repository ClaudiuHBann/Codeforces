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

	int t = next(int);
	while(t--) {
		int n = next(int);

		vi v;
		mii count;
		for(size_t i = 0; i < n; i++) {
			v.pb(next(int));

			if(count.find(v.back()) != count.end())
				count[v.back()]++;
			else
				count.insert(pii(v.back(), 1));
		}

		int mostRepeated = 0;
		for(auto it = count.begin(); it != count.end(); it++)
			if(it->second > mostRepeated)
				mostRepeated = it->second;

		cout << co(n > 1, __min(count.size() - 1, mostRepeated) + co(mostRepeated - ((int)count.size() - 1) >= 2, 1, 0), 0) << endl;
	}

	return 0;
}

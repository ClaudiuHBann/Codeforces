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
		int n = NEXT(int), x = NEXT(int), numEven = 0, numOdd = 0;

		for(size_t i = 0; i < n; i++)
			co(NEXT(int) % 2, numOdd++, numEven++);

		cout << co(numOdd > 0 && (x % 2 || numEven > 0) && ((x - numEven) % 2 || numOdd > x - numEven), "Yes", "No") << endl;
	}

	return 0;
}

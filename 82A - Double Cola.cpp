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

	string names[] { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	int n = next(int);

	if(n <= 5) {
		cout << names[n - 1];
		return 0;
	}

	int serves = 5;
	while(serves * 2 - 5 < n)
		serves *= 2;

	cout << names[(n - (serves - 5)) / (serves / 5)];

	return 0;
}

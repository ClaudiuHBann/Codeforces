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

	int n = next(int);
	ll sum1 = 0, sum2 = 0, sum3 = 0;

	for(size_t i = 0; i < n; i++)
		sum1 += next(int);
	for(size_t i = 0; i < n - 1; i++)
		sum2 += next(int);
	for(size_t i = 0; i < n - 2; i++)
		sum3 += next(int);

	cout << sum1 - sum2 << endl << sum2 - sum3;

	return 0;
}

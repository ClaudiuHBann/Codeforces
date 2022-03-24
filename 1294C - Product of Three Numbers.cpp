/*
		#				When				Who						Problem					Lang		Verdict		Time	Memory

	150833376	Mar/25/2022 00:29UTC+2	ClaudiuHBann	1294C - Product of Three Numbers	GNU C++14	Accepted	31 ms	200 KB
*/

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
		int n = NEXT(int);

		vi divisors;
		for(size_t i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) {
				divisors.pb(i);
				divisors.pb(n / i);
			}
		}

		bool ok = false;
		for(size_t i = 0; i < divisors.size() && !ok; i++) {
			for(size_t j = i + 1; j < divisors.size() && !ok; j++) {
				int remainder = n / (divisors[i] * divisors[j]);
				if(n % (divisors[i] * divisors[j]) == 0 &&
				   remainder != 1 && remainder != divisors[i] && remainder != divisors[j]) {
					ok = true;
					cout << "YES" << endl << divisors[i] << " " << divisors[j] << " " << remainder << endl;
				}
			}
		}

		if(!ok) {
			cout << "NO" << endl;
		}
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			We need to find all the divisors of that number
			After we found all the divisors, we take 2 of them, they are different, and we take the third one
			by dividing the number by the two divisors (let's name the result x), if the remainder is 0 then we check if
			the x is different than 1 and than first and than second divisor,
			if so then we print YES and the numbers, else we print NO

			Implementation:

			We find all the divisors, then we take the i divisor and the next divisors after i
			For every pair of divisors calculate the third divisor, if there is no remainder on number / (divisorOne * divisorTwo)
			we check if the third divisor is different than 1, first divisor and the second divisor, if so we print YES and the divisors and break out,
			else we print NO and go to the next test

			Remarks:

			Every divisor had a pair which is number / divisor
			The divisors and the pair will be found until the square root of that number, inclusive

	------------------------------	My Idea ------------------------------
*/

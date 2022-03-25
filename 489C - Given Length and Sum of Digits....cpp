/*
		#				When				Who						Problem						Lang		Verdict		Time	Memory

	150834669	Mar/25/2022 01:07UTC+2	ClaudiuHBann	C - Given Length and Sum of Digits...	GNU C++14	Accepted	15 ms	0 KB
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

	int m = NEXT(int), s = NEXT(int);

	if((s == 0 && m != 1) || 9 * m < s) {
		cout << "-1 -1";
		return 0;
	}

	string smallest(m, '0');
	for(int i = m - 1, sCopy = s; i >= 0 && sCopy; i--) {
		if(sCopy > 9) {
			smallest[i] = '9';
			sCopy -= 9;
		} else {
			if(sCopy == 1) {
				smallest[0] = '1';
			} else {
				if(i != 0) {
					smallest[0] = '1';
					sCopy--;
				}

				smallest[i] = sCopy + '0';
			}

			sCopy = 0;
		}
	}

	string biggest(m, '0');
	if(s > 9) {
		for(size_t i = 0; i < m && s; i++) {
			if(s > 9) {
				biggest[i] = '9';
				s -= 9;
			} else {
				biggest[i] = s + '0';
				s = 0;
			}
		}
	} else {
		biggest[0] = s + '0';
	}

	cout << smallest << " " << biggest;

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			Implementation:

			Remarks:

	------------------------------	My Idea ------------------------------
*/

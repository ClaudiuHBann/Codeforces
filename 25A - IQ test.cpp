/*
		#				When				Who				Problem		Lang		Verdict		Time	Memory

	148926583	Mar/08/2022 22:21UTC+2	ClaudiuHBann	25A - IQ test	GNU C++14	Accepted	30 ms	0 KB
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

	int n = NEXT(int);
	vi odds, evens;
	for(size_t i = 1; i <= n; i++) {
		int number = NEXT(int);

		if(number & 1) {
			if(odds.size() < 2)
				odds.pb(i);
		} else if(evens.size() < 2)
			evens.pb(i);

		if(odds.size() == 2 && evens.size() == 1) {
			cout << evens.front();
			break;
		}

		if(odds.size() == 1 && evens.size() == 2) {
			cout << odds.front();
			break;
		}
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			We read new numbers until we have 2 of 1 parity and 1 of the other parity, after that we can print the index and stop

			Implementation:

			We read a number if it is odd we add the index of it to the odds vector (if the odds vector is less than 2 in size)
			else we add the index of it to the evens vector (if the evens vector is less than 2 in size)
			If we have 2 to 1 ratio of parity we can stop reading numbers and we print the element from the vector with the size of 1

			Remarks:

	------------------------------	My Idea ------------------------------
*/

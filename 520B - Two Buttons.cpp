/*
		#				When				Who				Problem			Lang		Verdict		Time	Memory

	150924815	Mar/25/2022 19:11UTC+2	ClaudiuHBann	520B - Two Buttons	GNU C++14	Accepted	15 ms	0 KB
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

	int n = NEXT(int), m = NEXT(int);

	int moves = 0;
	while(m > n) {
		if(m & 1) {
			m++;
			moves++;
		}

		m /= 2;
		moves++;
	}

	cout << moves + n - m;

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

				Sometimes is easier to start from end, like here, is much easier and fast to go from m to n
				How ? invert the operations, from double the number and substract one from it, just
				add one or divide it by two
				We cannot divide it by two with no remainder so.. we need to add one to it, else we divide until m is lower than n
				In the end m might be lowe than n so.. we need to add one to it n - m times right?

			Implementation:

			We got a counter for the moves needed, while m is bigger than n, we divide m by 2 if m is even, else we add one to m and then we divide by 2
			When m <= n we stop and we print the moves, but wait, what if m is lower than n ? then we print the moves + n - m which means that
			we add one until m equals n

			Remarks:

				ThInK bAcKwArDs

	------------------------------	My Idea ------------------------------
*/

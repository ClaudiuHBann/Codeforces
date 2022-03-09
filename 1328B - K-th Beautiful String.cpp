/*
		#				When				Who						Problem				Lang		Verdict		Time	Memory

	149034645	Mar/10/2022 01:55UTC+2	ClaudiuHBann	1328B - K-th Beautiful String	GNU C++14	Accepted	31 ms	100 KB
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
		ll n = NEXT(int), k = NEXT(ll), closest = 1, index = 1;
		while(closest + index <= k)
			closest += index++;

		string s(n, 'a');
		s[n - 1 - index] = 'b';
		s[n - 1 - (k - closest)] = 'b';

		cout << s << endl;
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			We need to answer 2 questions. What is the index of the first b? But the second b?

			Examples:
				(moves is the number after which the string will look like that)
				(index is the distance from the last index in the string, of course last index in the string is n - 1, where n is the length of the string)

				...bb (1 index, 1 move) first b is located at the n - 1 - index
				...bab (2 index, 2 moves) - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " -
				...baab (3 index, 4 moves) - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " -
				...baaab (4 index, 7 moves) - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " - " -

				We are noticing a pattern, index is increasing by 1 and moves is increasing by last index

			Implementation:

			We get the t, loop through the cases, get the n and k for every case and
			find the closest number smaller than the number of moves which is k and get the index of that number
			Then we need to create a string of length n with only the character 'a' after which we need to change 2 characters to 'b'
			First 'b' or the left one is actually the last index of the string minus the index, in other words, n - 1 - index
			second 'b' or the right one is last index of the string minus the remainder of k after the moves, in other words, n - 1 - (k - closest)

			Remarks:

			The k is between 2.000.000.000 and min(2.000.000.000, 4.999.950.000) so there is a possibility where k is bigger than an integer, so we need a long long type for k

	------------------------------	My Idea ------------------------------
*/

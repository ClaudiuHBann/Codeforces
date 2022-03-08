/*
		#				When				Who						Problem					Lang		Verdict		Time	Memory

	148818947	Mar/08/2022 16:44UTC+2	ClaudiuHBann	1352C - K-th Not Divisible by n		GNU C++14	Accepted	15 ms	0 KB
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
		int n = NEXT(int), k = NEXT(int);

		cout << n * (k / (n - 1)) + co(k % (n - 1), k % (n - 1), -1) << endl;
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

		Examples:
					n = 2 -> 1 | 3 | 5 | 7 | 9 | 11 | 13 | 15 | ...
					n = 3 -> 1 2 | 4 5 | 7 8 | 10 11 | 13 14 | ...
					n = 4 -> 1 2 3 | 5 6 7 | 9 10 11 | 13 14 15 | ...

		We can see a pattern which is n - 1, n - 1, n - 1, ... (between them is the multiple of n)
		How many times the pattern repeats? k / (n - 1)
        What is the number after last pattern? n * (k / (n - 1))
        Is there more? k % (n - 1)
        if no it means that we need to get the number before the current number which is current - 1
        else will be the current + k % (n - 1)
        
        Kind of ambigous sorry :( (for me makes sense XD)

			Implementation:

		It's just a formula. (the "co" define is just the conditional operator)

			Remarks:

	------------------------------	My Idea ------------------------------
*/

/*
		#				When				Who							Problem	Lang				Verdict		Time	Memory

	148727080	Mar/07/2022 19:45UTC+2	ClaudiuHBann	1343C - Alternating Subsequence	GNU C++14	Accepted	77 ms	0 KB
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
		int n = NEXT(int) - 1, lastA = NEXT(int), bestA = lastA;
		ll bestSeqSum = 0;

		for(size_t i = 0; i < n; i++) {
			int a = NEXT(int);

			if((lastA > 0 && a < 0) || (lastA < 0 && a > 0)) {
				bestSeqSum += bestA;
				bestA = a;
			} else
				if(a > 0) {
					if(bestA < a)
						bestA = a;
				} else
					if(bestA < a)
						bestA = a;

			lastA = a;
		}

		cout << bestSeqSum + bestA << endl;
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

		Keep in mind that the length of the sequence is more important than the sum of the sequence
		So we need to find best number from a sequnce of numbers with the same sign
		Which is the smallest for negative numbers and biggest for positive numbers

			Implementation:

		We read the first number which will be the last number in comparation with the next one and will be the best number too
		After that we read all the numbers and for each number we check 
		if it's sign is changed in comparation with the last one and if it is we add it to the sum and we set the best number with the current number
		else we check if it's a better choice for the squence and if it is we assign the best number to the current number

			Remarks:

		The best sum cam be between -200.000.000.000.000 and 200.000.000.000.000 so we need a long long in order to hold that kind of number

	------------------------------	My Idea ------------------------------
*/

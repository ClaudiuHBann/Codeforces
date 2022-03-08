/*
		#				When				Who						Problem						Lang		Verdict		Time	Memory

	148916882	Mar/08/2022 20:01UTC+2	ClaudiuHBann	A - Deletions of Two Adjacent Letters	GNU C++14	Accepted	15 ms	0 KB
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
		string s = NEXT(string);
		char c = NEXT(char);

		bool ok = false;
		for(size_t i = 0; i < s.length() && !ok; i++)
			if(s[i] == c && ((i & 1) == 0 && ((s.length() - i - 1) & 1) == 0))
				ok = true;

		cout << co(ok, "YES", "NO") << endl;
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:
            
			If there is an even number of letters before and after the letter we need to keep we will print "YES" else "NO"

			Implementation:

			We iterate through the string and if we find the character we check if there is an even number of letters before and after the character
			if it is then we can stop iterating and we check if we found at least one good case (the ok bool variable means if we found one good case)
			if we did we print "YES" else we print "NO"

			Remarks:
            
            Adjacent letters means 2 consecutive letters
            
	------------------------------	My Idea ------------------------------
*/

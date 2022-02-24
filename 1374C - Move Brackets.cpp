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

#define bug(object) cout << endl << "bug(" << #object << " = " << object << ")" << endl;

#define FAST_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
	FAST_IO();

	int t;
	cin >> t;

	while(t--) {
		int n;
		string brackets;
		cin >> n >> brackets;

		int openedBrackets = 0, wrongBrackets = 0;
		bool between = false;
		for(size_t i = 0; i < n; i++)
			if(brackets[i] == '(')
				if(between)
					openedBrackets++;
				else
					between = true;
			else
				if(between)
					if(openedBrackets > 0)
						openedBrackets--;
					else {
						between = false;
						openedBrackets = 0;
					} else
						wrongBrackets++;

		cout << wrongBrackets << endl;
	}

	return 0;
}

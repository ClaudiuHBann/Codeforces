/*
		#				When				Who				Problem			Lang		Verdict		Time	Memory

	150645997	Mar/23/2022 21:42UTC+2	ClaudiuHBann	B - Random Teams	GNU C++14	Accepted	15 ms	0 KB
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

	ll n = NEXT(int), m = NEXT(int);
	
	ll biggestTeam = n - (m - 1);
	ll kMax = biggestTeam * (biggestTeam - 1) / 2;

	ll NmodM = n % m, NdivM = n / m;
	ll kMin = ((NdivM + 1) * (NdivM) / 2) * NmodM + ((NdivM) * (NdivM - 1) / 2) * (m - NmodM);

	cout << kMin << " " << kMax;

	return 0;
}
/*
	------------------------------	My Idea ------------------------------

			Logic:

				kMax will have teams of 1 1 1 1 1 1 ... and the rest
				So as a formula we will have m - 1 teams of 1 (so no friends) and a team of n - (m - 1) people (so there are people * (people - 1) * 2)
				kMin needs to have teams as dispersed (equal) as possible
				For example 6 3 will have 2 2 2 teams or 10 6 will have 2 2 2 2 1 1 or 5 3 will have 2 2 1
				So in general we will have m teams of n / m but there can be people which dont have a team (the rest or n % m, we will disperse those in the other teams, one in every team)
				So we have the teams: n % m teams of n / m + 1 and the rest teams of n / m which will be n - n % m
				As a formula the line 47

			Implementation:

				There are the formulas from "Logic:"
				For more understanding and a little speed I didnt made it a one line solution

			Remarks:
			
				kMax and kMin can be more than an unsigned int so we are going to use long long types

	------------------------------	My Idea ------------------------------
*/

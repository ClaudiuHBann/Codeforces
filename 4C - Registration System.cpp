/*
		#				When				Who					Problem				Lang		Verdict		Time	Memory

	149016444	Mar/09/2022 19:39UTC+2	ClaudiuHBann	4C - Registration System	GNU C++14	Accepted	1152 ms	9700 KB
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
	map<string, int> names;
	while(n--) {
		string name = NEXT(string);
		if(names.find(name) != names.end()) {
			names[name + to_string(names[name])]++;
			cout << name << names[name]++ << endl;
		} else {
			names[name]++;
			cout << "OK" << endl;
		}
	}

	return 0;
}

/*
	------------------------------	My Idea ------------------------------

			Logic:

			If the name already exists we need to put a number at the end and print that name else print "OK"

			Implementation:

			We have a map with the name as a key and the value as the number for the next name if we find the same name
			We read a new name, check if already exist in the map
			if it does we add the new name to the map (name + number as string and the value 1) next we print the new name and increase the name count at the same time
			else we add it and set the number (which is 1) for the next name same as this one and print "OK"

			Remarks:
			
			map[key] = value is the same as map.insert(key, value)
			As an example: "names[name]++" is the same as "names.insert(name, 1)" (the value is 0 by default and the "++" makes the value 1)

	------------------------------	My Idea ------------------------------
*/

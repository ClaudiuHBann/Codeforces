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

	int n, m;
	cin >> n >> m;

	map<string, string> wordsMap;
	while(m--) {
		string word1, word2;
		cin >> word1 >> word2;

		wordsMap.insert(pair<string, string>(word1, word2));
	}

	while(n--) {
		string word;
		cin >> word;

		cout << co(word.length() > wordsMap.find(word)->second.length(), wordsMap.find(word)->second, word) << " ";
	}

	return 0;
}

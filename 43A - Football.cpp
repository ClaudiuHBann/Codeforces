#include <iostream>
#include <string>

#define ULL unsigned long long
#define LL long long

#define FAST_IO() std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

int main() {
	FAST_IO();

	int n, nHalfAndOne;
	std::cin >> n;
	nHalfAndOne = n / 2 + 1;

	int teamAScore = 0, teamBScore = 0;
	std::string teamAName, teamBName;
	while(n--) {
		std::string team;
		std::cin >> team;

		if(teamAName.empty())
			teamAName = team, teamAScore++;
		else if(teamBName.empty() && team != teamAName)
			teamBName = team, teamBScore++;

		(team == teamAName) ? teamAScore++ : teamBScore++;

		if(teamAScore > nHalfAndOne || teamBScore > nHalfAndOne)
			break;
	}

	std::cout << ((teamAScore > teamBScore) ? teamAName : teamBName);

	return 0;
}

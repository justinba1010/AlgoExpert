/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
#include <map>
using namespace std;

typedef map<string, int> mapsi;

void addScore(mapsi &results, string x) {
    auto it = results.find(x);
    if (it == results.end()) {
        results[x] = 3;
    } else {
        results[x] += 3;
    }
}

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
    mapsi scores;
    auto result = results.begin();
    for (auto competition : competitions) {
        string x = competition[0];
        string y = competition[1];
        // We check the results, and then iterate to the next
        if (*(result++)) { // First team wins
            addScore(scores, x);
        } else { // Second team wins
            addScore(scores, y);
        }
    }
    
    // Check for largest in O(n)
    int max = 0;
    string winner;
    for (auto it : scores) {
        if (it.second > max) {
            max = it.second;
            winner = it.first;
        }
    }
    
  return winner;
}


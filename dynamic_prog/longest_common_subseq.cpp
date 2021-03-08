/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

vector<char> longestCommonSubsequence(string str1, string str2) {
    int n = str1.length() + 1;
    int m = str2.length() + 1;
    vector<vector<int>> substrings = vector(n, vector(m, 0));
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (str1[i-1] == str2[j-1]) {
                substrings[i][j] = substrings[i-1][j-1] + 1;
            } else {
                substrings[i][j] = max(substrings[i-1][j], substrings[i][j-1]);
            }
        }
    }
    vector<char> s;
    int i = n - 1;
    int j = m - 1;
    while (i > 0 && j > 0) {
        if (substrings[i][j] == substrings[i-1][j]) {
            --i;
        } else if (substrings[i][j] == substrings[i][j-1]) {
            --j;
        } else {
            s.insert(s.begin(), str1[i - 1]);
            --i;
            --j;
        }
    }
    return s;
}

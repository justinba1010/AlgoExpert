/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
#include <climits>
using namespace std;

vector<vector<int>> maxSumIncreasingSubsequence(vector<int> array) {
    int n = array.size();
    vector<int> sums(array);
    vector<vector<int>> subsequences(n, vector<int>());
    for (int i = 0; i < n; ++i) subsequences[i].push_back(array[i]);
    if (n == 0) return {{0}, {}};
    int max_index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (array[j] < array[i]) {
                if (sums[j] + array[i] >= sums[i]) {
                    sums[i] = sums[j] + array[i];
                    subsequences[i] = subsequences[j];
                    subsequences[i].push_back(array[i]);
                }
            }
        }
        if (sums[i] > sums[max_index]) {
            max_index = i;
        }
    }
    return {{sums[max_index]}, {subsequences[max_index]}};
}

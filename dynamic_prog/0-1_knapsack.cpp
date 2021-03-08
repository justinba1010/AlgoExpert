/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

vector<vector<int>> knapsackProblem(vector<vector<int>> items, int capacity) {
    int nitems = items.size();
    vector<vector<int>> knapsack = vector(nitems + 1, vector(capacity + 1, 0));
    for (int i = 1; i < nitems + 1; ++i) {
        int currValue = items[i-1][0];
        int currWeight = items[i-1][1];
        for (int j = 0; j < capacity + 1; ++j) {
            if (currWeight > j) {
                knapsack[i][j] = knapsack[i-1][j];
            } else {
                knapsack[i][j] = max(
                    knapsack[i-1][j],
                    knapsack[i-1][j-currWeight] + currValue
                );
            }
        }
    }
    // Get indices
    int i = nitems;
    int j = capacity;
    vector<int> vals = {};
    while (i > 0) {
        if (knapsack[i][j] == knapsack[i-1][j]) --i;
        else {
            --i;
            vals.push_back(i);
            j -= items[i][1];
        }
        if (j == 0) break;
    }
  return {
      {knapsack[nitems][capacity]},   // total value
      vals, // item indices
  };
}

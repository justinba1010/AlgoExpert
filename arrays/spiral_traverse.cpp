/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
    int i_end = array.size() - 1;
    int j_end = (i_end >= 0) ? array[0].size() - 1: 0;
    int i = 0;
    int j = 0;
    vector<int> v;
    cout << j << "\t" << j_end << endl;
    while (i <= i_end && j <= j_end) {
        // Top row
        for (int a = j; a <= j_end; ++a) v.push_back(array[i][a]);
        // Right col
        for (int a = i+1; a <= i_end; ++a) v.push_back(array[a][j_end]);
        // Bottom col
        if (i != i_end) for (int a = j_end-1; a >= j; --a) v.push_back(array[i_end][a]);
        // Left col
        if (j != j_end) for (int a = i_end-1; a > i; --a) v.push_back(array[a][j]);
        ++i; --i_end;
        ++j; --j_end;
    }
  return v;
}

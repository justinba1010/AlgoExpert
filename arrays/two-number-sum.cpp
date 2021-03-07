/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

i#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
    int i,j;
    sort(array.begin(), array.end());
    i = 0;
    j = array.size() - 1;
    while (i != j) {
        int x,y,s;
        x = array[i];
        y = array[j];
        s = x + y;
        if (s == targetSum) {
            return {x,y};
        } else if (s < targetSum)
            ++i;
        else
            --j;
    }
  return {};
}


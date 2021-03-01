/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
    sort(arrayOne.begin(), arrayOne.end());
    sort(arrayTwo.begin(), arrayTwo.end());
    
    auto i = arrayOne.begin();
    auto j = arrayTwo.begin();
    int c1 = INT_MAX;
    int c2 = 0;
    
    while (i != arrayOne.end() && j != arrayTwo.end()) {
        int a = *i;
        int b = *j;
        if (abs(a - b) < abs(c1 - c2)) {
            c1 = a;
            c2 = b;
        }
        if (a == b) {
            break;
        } else if (a < b) {
            ++i;
        } else {
            ++j;
        }
    }
  return {c1, c2};
}

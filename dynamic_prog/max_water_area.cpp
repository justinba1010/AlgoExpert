/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

int waterArea(vector<int> heights) {
  // Write your code here.
    int s = heights.size();
    vector<int> lefts = vector(s, 0);
    vector<int> rights = vector(s, 0);
    int ml = 0;
    int mr = 0;
    for(int i = 0, j = s - 1; i < s; ++i, --j) {
        // Move max from the left
        lefts[i] = ml;
        rights[j] = mr;
        if (heights[i] > ml) {
            ml = heights[i];
        }
        // Move max from the right
        if (heights[j] > mr) {
            mr = heights[j];    
        }
    }
    for (int i = 0; i < s; ++i) {
        cout << lefts[i] << " | " << rights[i] << endl;
    }
    int sum = 0;
    for (int i = 0; i < s; ++i) {
        sum += max(min(lefts[i], rights[i]) - heights[i], 0);
    }
  return sum;
}

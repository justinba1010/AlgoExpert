/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
    transform(array.begin(), array.end(), array.begin(), [](int x) { return x*x;});
    sort(array.begin(), array.end());
  return array;
}

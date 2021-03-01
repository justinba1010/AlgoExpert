/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
    int s = array.size();
    for (int i = 0; i < s - 1; ++i) {
        for (int j = i + 1; j < s; ++j) {
            if (array[j] < array[i]) swap(array[i], array[j]);
        }
    }
  return array;
}

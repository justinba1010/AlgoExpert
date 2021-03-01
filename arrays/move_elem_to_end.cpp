/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
    int indexOfEnd = array.size() - 1;
    int indexOfFront = 0;
    while (indexOfFront != indexOfEnd) {
        for (; indexOfFront < indexOfEnd && array[indexOfFront] != toMove; ++indexOfFront) continue;
        for (; indexOfEnd >= 0 && array[indexOfEnd] == toMove; --indexOfEnd) continue;
        if(indexOfFront > indexOfEnd) break;
        swap(array[indexOfFront++], array[indexOfEnd--]);
    }
  return array;
}

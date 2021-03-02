/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
#include <algorithm>
using namespace std;

int firstDuplicateValue(vector<int> array) {
    // Because this is 1..n, and we're not being 
    // Ridiculous to save n bytes of memory
    bool values[array.size()];
    fill_n(values, array.size(), false);
    for (int x : array) {
        if (values[x-1]) return x;
        values[x-1] = true;
    }
    return -1;
}

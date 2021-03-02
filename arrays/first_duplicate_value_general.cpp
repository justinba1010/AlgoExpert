/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
#include <set>
using namespace std;

int firstDuplicateValue(vector<int> array) {
    set<int> s;
    for (int x : array) {
        if (s.find(x) != s.end()) {
            return x;
        }
        s.insert(x);
    }
    return -1;
}

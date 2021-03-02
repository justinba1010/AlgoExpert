/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>

using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
    int left = 1;
    vector<int> v = vector(array.size(), 1);
    for (int i = 0; i < array.size(); ++i) {
        v[i] *= left;
        left *= array[i];
    }
    int right = 1;
    for (int i = array.size() - 1; i >= 0; --i) {
        v[i] *= right;
        right *= array[i];
    }
    return v;
}

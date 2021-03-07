/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <numeric>
using namespace std;

int minimumWaitingTime(vector<int> queries) {
    int size = queries.size();
    if (size == 0) return 0;
    sort(queries.begin(), queries.end());
    vector<int> s = vector(size, 0);
    s[0] = 0;
    for (int i = 1; i < size; ++i) {
        s[i] = s[i-1] + queries[i-1];
    }
    
    return accumulate(s.begin(), s.end(), 0);
    
}

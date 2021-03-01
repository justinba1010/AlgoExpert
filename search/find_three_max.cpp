#include <vector>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
    int m1, m2, m3;
    m1 = m2 = m3 = INT_MIN;
    for (int x : array) {
        if (x > m1) {
            m3 = m2;
            m2 = m1;
            m1 = x;
        } else if (x > m2) {
            m3 = m2;
            m2 = x;
        } else if (x > m3) {
            m3 = x;
        }
    }
  return {m3, m2, m1};
}

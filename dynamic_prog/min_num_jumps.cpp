#include <vector>
using namespace std;

int minNumberOfJumps(vector<int> array) {
    int size = array.size();
    vector<int> jumps = vector<int>(size, INT_MAX >> 1);
    jumps[size-1] = 0;
    for (int i = size - 2; i >= 0; --i) {
        int forward = min(array[i], size - i - 1);
        for (int j = 1; j <= forward; ++j) {
            jumps[i] = min(jumps[i], 1 + jumps[i + j]);
        }
    }
    return jumps[0];
}

/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

int longestPeak(vector<int> array) {
    int max_peak = 0;
    if (array.size() <= 2) {
        return array.size();
    }
    for (int i = 0; i < array.size() - 2;) {
        if (array[i] < array[i + 1] && array[i + 1] > array[i + 2]) {
            int left = i;
            int right = i+2;
            while (left > 0 && array[left - 1] < array[left]) {
                --left;    
            }
            while (right < array.size() - 1 && array[right] > array[right + 1]) {
                ++right;    
            }
            max_peak = max(right - left + 1, max_peak);
            i = right;
        } else ++i;
    }
    return max_peak;
}

/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

int binarySearch(vector<int> arr, int target) {
  // Write your code here.
    int i = 0;
    int j = arr.size();
    int x;
    
    while (i != j) {
        x = ((j - i) >> 1) + i;
        if (arr[x] == target) return x;
        if (arr[x] < target) i = x + 1;
        else j = x;
    }
  return -1;
}

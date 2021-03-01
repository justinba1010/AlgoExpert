#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> array) {
  // Write your code here.
    int s = array.size();
    for (int i = 0; i < s - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < s; ++j) {
            if (array[minIndex] > array[j]) minIndex = j;
        }
        swap(array[i], array[minIndex]);
    }
  return array;
}

using namespace std;

bool isMonotonic(vector<int> array) {
    if (array.size() <= 2) return true;
    bool increasing = false;
    bool decreasing = false;
    for (int i = 1; i < array.size(); ++i) {
        increasing |= array[i] > array[i - 1];
        decreasing |= array[i] < array[i - 1];
    }
    cout << increasing << "\t" << decreasing;
  return !(increasing && decreasing);
}

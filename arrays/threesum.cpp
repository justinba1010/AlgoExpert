#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> arr, int targetSum) {
	sort(arr.begin(), arr.end());
	vector<vector<int>> vec;
	int len = arr.size();
	for (int i = 0; i < len - 2; ++i) {
		int j = i + 1;
		int k = len - 1;
		int target = targetSum - arr[i];
		while (j != k) {
			int sum = arr[j] + arr[k];
			if (sum == target) {
				vec.push_back({arr[i], arr[j], arr[k]});
				int t = j + 1;
				
				// Edge case
				while (arr[t] + arr[k] == target) {
					vec.push_back({arr[i], arr[t], arr[k]});
					++t;
				}
				--k;
			} else if (sum < target) {
				++j;
			} else {
				--k;
			}
		}
	}
	return vec;
}
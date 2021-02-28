#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  // Write your code here.
	// Knapsack- Kind of
	if (n <= 0) return 1;
	vector<int> counts = vector(n + 1, 0);
	counts[0] = 1;
	for (int denom : denoms) {
		// This forces us to only consider unique combos
		for (int i = denom; i <= n; ++i) {
			if (i - denom >= 0)
			counts[i] += counts[i - denom];
		}
	}
	return counts[n];
}

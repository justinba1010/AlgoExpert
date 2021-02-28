#include <vector>
using namespace std;

typedef unsigned int uint;

int minNumberOfCoinsForChange(int n, vector<int> denoms) {
	vector<int> minways = vector(n + 1, INT_MAX - 2);
	minways[0] = 0;
	for (int denom : denoms) {
		for (int i = denom; i <= n; ++i) {
			if (i - denom >= 0)
			minways[i] = min(minways[i-denom] + 1, minways[i]);
		}
	}
  return minways[n] == INT_MAX - 2 ? -1 : minways[n];
}

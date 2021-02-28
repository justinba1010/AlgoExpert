#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
	int change = 0;
	sort(coins.begin(), coins.end());
	for (int coin : coins) {
		if (coin > change + 1) {
			return change + 1;
		}
		change += coin;
	}
	return change + 1;
}

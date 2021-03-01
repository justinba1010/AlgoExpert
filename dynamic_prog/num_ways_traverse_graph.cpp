using namespace std;

int getDefault(vector<vector<int>> &ways, int x, int y, int h, int w) {
	if (x >= 0 && x < w && y >= 0 && y < h) return ways[y][x];
	return 0;
}

int numberOfWaysToTraverseGraph(int width, int height) {
	vector<vector<int>> ways = vector<vector<int>>(height, vector<int>(width, 0));
	ways[0][0] = 1;
	for (int i = 0; i < height; ++i) {
		// right
		for (int j = 0; j < width; ++j) {
			ways[i][j] += getDefault(ways, j - 1, i, height, width) + getDefault(ways, j, i - 1, height, width);
		}
	}
  return ways[height - 1][width - 1];
}

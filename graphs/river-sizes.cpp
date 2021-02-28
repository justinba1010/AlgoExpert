#include <vector>
using namespace std;


int dfs(vector<vector<bool>> &visited, const vector<vector<int>> &matrix, int i, int j, int w, int h) {
	if (i < 0 || j < 0 || i >= h || j >= w) {
		return 0;
	}
	if (!visited[i][j] && matrix[i][j] == 1) {
		visited[i][j] = true;
		return 1 +
			dfs(visited, matrix, i+1, j, w, h) +
			dfs(visited, matrix, i-1, j, w, h) +
			dfs(visited, matrix, i, j+1, w, h) +
			dfs(visited, matrix, i, j-1, w, h);
	}
	return 0;
}

vector<int> riverSizes(vector<vector<int>> matrix) {
  // Write your code here.
	vector<int> sizes;
	int h = matrix.size();
	int w = (h > 0) ? matrix[0].size() : 0;
	vector<vector<bool>> visited = vector<vector<bool>>(h, vector<bool>(w, false));
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int result = dfs(visited, matrix, i, j, w, h);
			if (result > 0) sizes.push_back(result);
		}
	}
  return sizes;
}


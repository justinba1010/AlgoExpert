int maxSubsetSumNoAdjacent(vector<int> array) {
  // Write your code here.
	int l = array.size();
	if (l == 0) return 0;
	vector<int> maxy = vector<int>(l, array[0]);
	for (int i = 0; i < l; ++i) {
		int x = (i - 1) >= 0 ? maxy[i-1] : 0;
		int y = (i - 2) >= 0 ? maxy[i-2] : 0;
		maxy[i] = max(x, array[i] + y);
	}
  return maxy[l-1];
}

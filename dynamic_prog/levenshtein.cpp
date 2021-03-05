/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

int min3(int x, int y, int z){
    return min(min(x,y),z);
}

int levenshteinDistance(string str1, string str2) {
  // Write your code here.
    int n,m;
    n = str1.length();
    m = str2.length();
    auto dynamic = vector(n+1, vector(m+1, 0));
    // Empty string1
    for (int i = 0; i <= m; ++i) dynamic[0][i] = i;
    // Empty string2
    for (int j = 0; j <= n; ++j) dynamic[j][0] = j;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            // Identical
            if (str1[i - 1] == str2[j - 1]) {
                dynamic[i][j] = dynamic[i-1][j-1];
            } else {
                dynamic[i][j] = min3(dynamic[i-1][j-1], dynamic[i-1][j], dynamic[i][j-1]) + 1;
            }
        }
    }
  return dynamic[n][m];
}

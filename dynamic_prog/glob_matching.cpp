/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;
#include <algorithm>

bool globMatching(string fileName, string pattern) {
    
    int size_file_name = fileName.length();
    int size_pattern = pattern.length();
    bool dynamic[size_file_name+1][size_pattern+1];
    for(int i = 0; i <= size_file_name; ++i)
        for (int j = 0; j <= size_pattern; ++j)
            dynamic[i][j] = false;
    dynamic[0][0] = true;
    for (int j = 1; j <= size_pattern; ++j) {
        if (pattern[j-1] == '*') 
            dynamic[0][j] = dynamic[0][j-1];
    }
    
    for (int i = 1; i <= size_file_name; ++i) {
        for (int j = 1; j <= size_pattern; ++j) {
            if (pattern[j-1] == '*') {
                dynamic[i][j] = dynamic[i-1][j] || dynamic[i][j-1];
            } else if (pattern[j-1] == '?' || pattern[j-1] == fileName[i-1]) {
                dynamic[i][j] = dynamic[i-1][j-1];
            } else
                dynamic[i][j] = false;
        }
    }
    return dynamic[size_file_name][size_pattern];
}

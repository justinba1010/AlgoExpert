using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
    auto arr = array.begin();
    auto seq = sequence.begin();
    while (arr != array.end()) {
        if (*arr == *seq)
            ++seq;
        ++arr;
    }
    return seq == sequence.end();
}


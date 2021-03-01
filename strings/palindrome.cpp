using namespace std;

bool isPalindrome(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; --i) rev += str[i];
  return str == rev;
}

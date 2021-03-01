/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
    string s = "";
    for (char x : str) {
        x -= 97;
        x += key;
        x %= 26;
        x += 97;
        s += x;
    }
  return s;
}

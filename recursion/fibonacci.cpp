/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

int fib(int n, int f_1, int f_2) {
    int f = f_1 + f_2;
    if (n == 0) return f;
    return fib(n - 1, f, f_1);
}

int getNthFib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 0;
    return fib(n - 2, 0, 1);
}

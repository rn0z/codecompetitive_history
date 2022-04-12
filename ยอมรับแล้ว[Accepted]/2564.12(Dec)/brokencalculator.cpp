#include <bits/stdc++.h>

using namespace std;

int main() {
    int n{}; scanf("%d", &n);
    long long int prev = 1;
    while (n--) {
        char op{};
        long long int a{}, b{};
        long long int rs{};
        cin >> a >> op >> b;
        if (op == '+') {
            rs = (a + b) - prev;
        } else if (op == '-') {
            rs = (a - b) * prev;
        } else if (op == '*') {
            rs = a * b;
            rs = rs * rs;
        } else if (op == '/') {
            if ((a & 1) == 0) {
                rs = a / 2;
            } else {
                rs = ++a / 2;
            }
        }
        cout << rs << endl;
        prev = rs;
    }


    return 0;
}
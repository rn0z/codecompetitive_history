#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; int tc = 1;
    while (cin >> s) {
        if (s[0] == '*') {
            break;
        } else {
            if (s[0] == 'H') {
                printf("Case %d: Hajj-e-Akbar\n", tc);
            } else {
                printf("Case %d: Hajj-e-Asghar\n", tc);
            }
        }
        tc++;
    }
    return 0;
}
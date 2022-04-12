#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int s{}; cin >> s;
    cout << s << ":" << endl;
    for (int i = 2; i <= (s / 2) + 1; i++) {
        int x = i;
        int y = x - 1;
        if (s % (x + y) == x || s % (x + y) == 0) {
            cout << x << "," << y << endl;
        }
        if (s % x == 0) {
            cout << x << "," << x << endl;
        }
    }


    return 0;
}
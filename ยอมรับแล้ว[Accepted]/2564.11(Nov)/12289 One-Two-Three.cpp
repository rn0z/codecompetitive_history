#include <bits/stdc++.h>

int main() {
    using namespace std;
    int tc; cin >> tc;
    while (tc--) {
        string s{}; cin >> s;
        if (s.length() > 4) {
            cout << 3 << endl;
            continue;
        }
        // one
        if (
            (s[0] == 'o' && s[1] == 'n') ||
            (s[0] == 'o' && s[2] == 'e') ||
            (s[1] == 'n' && s[2] == 'e')
            ) {
                cout << 1 << endl;
                continue;
            } else {
                cout << 2 << endl;
            }
    }

    return 0;
}
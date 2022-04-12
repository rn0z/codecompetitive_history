#include <bits/stdc++.h>

using namespace std;

int main() {
    int r{}, l{}; cin >> l >> r;

    if (!r && !l) {
        cout << "Not a moose" << endl;
    } else if (r == l) {
        cout << "Even " << (r * 2) << endl;
    } else if (r > l) {
        cout << "Odd " << (r * 2) << endl;
    } else if (l > r) {
        cout << "Odd " << (l * 2) << endl;
    }

    return 0;
}
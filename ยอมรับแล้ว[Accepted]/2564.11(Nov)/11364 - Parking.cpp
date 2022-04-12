#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{}; cin >> t;
    while (t--) {
        int n{}; cin >> n;
        int min = 99, max{};
        while (n--) {
            int x{}; cin >> x;
            if (x >= max) {
                max = x;
            }
            if (x <= min) {
                min = x;
            }
        }
        cout << 2 * (max - min) << endl;
    }

    return 0;
}
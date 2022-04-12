#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}; cin >> n;
    int speed = -1;
    int prevt = 0, prevd = 0;
    while (n--) {
        int t, d; cin >> t >> d;
        int rs{};
        if (d - prevd > 0 && t - prevt > 0) {
            rs = (d - prevd) / (t - prevt);
        }
        if (rs > speed) {
            speed = rs;
        }
        prevt = t;
        prevd = d;
    }
    cout << speed << endl;

    return 0;
}
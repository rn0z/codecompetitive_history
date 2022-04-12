#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int tc{}; cin >> tc;

    while (tc--) {

        int r, e, c; cin >> r >> e >> c;

        if (e - c == r) {
            cout << "does not matter";
        } else if (e - c > r) {
            cout << "advertise";
        } else if (e - c < r) {
            cout << "do not advertise";
        }

        cout << '\n';

    }

    return 0;
}

/*
    malicious - มุ่งร้าย, ประสงค์ร้าย (adjective)
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc{}; cin >> tc;
    while (tc--) {
        int f{}; cin >> f;
        int rs{};
        while (f--) {
            int farmyard{}, animals{}, envi{};
            cin >> farmyard >> animals >> envi;
            rs += farmyard * envi;
        }
        cout << rs << endl;
    }


    return 0;
}
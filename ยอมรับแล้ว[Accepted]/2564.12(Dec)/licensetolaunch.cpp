#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int i = 0;
    int n; cin >> n;
    int min = 1000000000;
    for (int k = 0; k < n; k++) {
        int junk{}; cin >> junk;
        if (junk < min) {
            i = k;
            min = junk;
        }
    }
    cout << i << endl;

    return 0;
}
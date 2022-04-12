#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n; cin >> n;
    while (n--) {
        int g; cin >> g;
        int king{}, prev{}; cin >> prev;
        for (int i = 2; i <=  g; i++) {
            int cur{}; cin >> cur;
            if (cur != prev + 1) {
                king = i;
            }
            prev = cur;
        }
        cout << --king << endl;
    }


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc{}; cin >> tc;
    int i = 1;
    while (tc--) {
        cout << "Case " << i << ": ";
        int k{}; cin >> k;
        int c = 1;
        while (k--) {
            int c1{}; cin >> c1;
            if (c1 > c) c = c1;
        }
        cout << c << endl;;
        i++;
    }


    return 0;
}
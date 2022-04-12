#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc{}; cin >> tc;
    for (int i = 1; i <= tc; i++) {
        int n{}; cin >> n;
        int cur{}; cin >> cur;
        int h{}, l{};
        for (int k = 0; k < n - 1; k++) {
            int wall{}; cin >> wall;
            if (cur > wall) {
                ++l;
            }
            if (cur < wall) {
                ++h;
            }

            cur = wall;
        }
        printf("Case %d: %d %d\n", i, h, l);
    }

    return 0;
}
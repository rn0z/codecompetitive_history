#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc{}; cin >> tc;
    int count = 1;
    while (tc--) {
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);
        if (l > 20 || w > 20 || h > 20) {
            printf("Case %d: bad\n", count);
        } else {
            printf("Case %d: good\n", count);
        }
        count++;
    }

    return 0;
}
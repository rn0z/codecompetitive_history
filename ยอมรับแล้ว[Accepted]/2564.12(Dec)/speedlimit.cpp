#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != -1) {
        int s, t;
        int prevt{};
        int total{};
        for (int i = 0; i < n; i++) {
            cin >> s >> t;
            total += (t - prevt) * s;
            prevt = t;
        }
        printf("%d miles\n", total);
    }


    return 0;
}
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
    int TC; scanf("%d", &TC);
    while (TC--) {
        int l; scanf("%d", &l);
        int n = 99, m = 0;
        for (int i = 0; i < l; ++i) {
            int x;
            scanf("%d", &x);
            if (n > x) n = x;
            if (m < x) m = x;
        }
        printf("%d\n", 2 * (m - n));
    }

    return 0;
}

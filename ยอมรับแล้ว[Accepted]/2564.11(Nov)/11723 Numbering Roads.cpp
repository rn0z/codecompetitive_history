#include <bits/stdc++.h>

using namespace std;

int main() {
    int r{}, n{};
    int tc = 1;
    while (scanf("%d %d", &r, &n) && r) {
        int rs = (r - n) / n + ((r - n)%n != 0 && n <= r);
        if (rs > 26) {
            printf("Case %d: impossible\n", tc);
        } else {
            //printf("(%d - %d) / %d = %.2f\n", r, n, n, (((float)r - n) / n));
            printf("Case %d: %d\n", tc,  (int)rs);
        }
        tc++;
    }


    return 0;
}
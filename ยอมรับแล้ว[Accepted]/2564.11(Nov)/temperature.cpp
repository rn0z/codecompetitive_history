#include <bits/stdc++.h>

using namespace std;

int main() {

    int x{}, y{};
    while (scanf("%d %d", &x, &y) != EOF) {
        // x / (1.0 / y)
        if (x == 0 && y == 1) printf("ALL GOOD\n");
        else if (y == 1) printf("IMPOSSIBLE\n");
        else {
            float rs = x / (1.0 - y);
            printf("%.9f\n", rs);
            // if (rs >= -1.0) printf("%.9f\n", rs);
            // else printf("%d\n", (int)rs);
        }
    }


    return 0;
}
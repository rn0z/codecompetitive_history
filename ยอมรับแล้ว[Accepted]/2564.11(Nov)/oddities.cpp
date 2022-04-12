#include <bits/stdc++.h>

int main() {
    int tc; scanf("%d", &tc);
    while (tc--) {
        int x{}; scanf("%d", &x);
        int ori = x;
        if (x < 0) x = x*-1;
        if (x & 1) printf("%d is odd", ori);
        else printf("%d is even", ori);
        printf("\n");
    }
}
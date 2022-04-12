#include <bits/stdc++.h>
#include <cstdio>

int main() {
    int tc; scanf("%d", &tc);
    int a, b;
    while (tc--) {
        scanf("%d %d", &a, &b);
        if (a > b) printf(">");
        else if (a < b) printf("<");
        else printf("=");
        if (tc > 0) printf("\n");
    }
}

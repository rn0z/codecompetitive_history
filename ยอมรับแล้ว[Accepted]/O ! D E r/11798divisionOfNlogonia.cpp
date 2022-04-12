#include <bits/stdc++.h>
#include <cstdio>

int main() {
    int k, N, M, x, y;
    
    while (scanf("%d", &k), k != 0) {
        scanf("%d %d", &N, &M);
        while (k--) {
            scanf("%d %d", &x, &y);
            if (x == N || y == M) printf("divisa");
            else if (x > N && y > M) printf("NE");
            else if (x > N && y < M) printf("SE");
            else if (x < N && y > M) printf("NO");
            else if (x < N && y < M) printf("SO");

            printf("\n");

        }
    }

    return 0;
}

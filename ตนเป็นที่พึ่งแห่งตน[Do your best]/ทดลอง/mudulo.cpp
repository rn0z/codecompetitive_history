#include <bits/stdc++.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        printf("%d mod %d = %d\n", 17, i, 17 % i);
    }
    printf("---------------------------\n");
    for (int i = 1; i <= 20; i++) {
        printf("%d mod %d = %d\n", i, 17, i % 17);
    }

    printf("\n*********************************\n\n");

    for (int i = 1; i <= 20; i++) {
        printf("%d mod %d = %d\n", 17, i*-1, (17 % (i*-1)));
    }

    printf("---------------------------\n");
    for (int i = 1; i <= 20; i++) {
        printf("%d mod %d = %d\n", (i*-1), 17, ((-1*i) % 17));
    }

    return 0;
}
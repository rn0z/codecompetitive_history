#include <bits/stdc++.h>
using namespace std;

int main() {
    int a{}, b{}, c{};
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if ((a == 0 && b == 0 && c == 0) || (a == 1 && b == 1 && c == 1)) {
            printf("*\n");
        } else {
            if (b == 1 && c == 1) {
                if (a == 0) {
                    printf("A\n");
                }
            }
            if (b == 0 && c == 0) {
                if (a == 1) {
                    printf("A\n");
                }
            }
            if (a == 0 && c == 0) {
                if (b == 1) {
                    printf("B\n");
                }
            }
            if (a == 1 && c == 1) {
                if (b == 0) {
                    printf("B\n");

                }
            }

            if (a == 0 && b == 0) {
                if (c == 1) {
                    printf("C\n");
                }
            }
            if (a == 1 && b == 1) {
                if (c == 0) {
                    printf("C\n");
                }
            }
        }
    }



    return 0;
}
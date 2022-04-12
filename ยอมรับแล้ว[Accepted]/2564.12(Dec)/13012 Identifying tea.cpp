#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    while (scanf("%d", &T) != EOF) {
        int correct{};
        int a,b,c,d,e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if (a == T) correct++;
        if (b == T) correct++;
        if (c == T) correct++;
        if (d == T) correct++;
        if (e == T) correct++;

        printf("%d\n", correct);
    }


    return 0;
}
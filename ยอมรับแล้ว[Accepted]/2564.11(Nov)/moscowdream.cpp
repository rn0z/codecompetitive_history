#include <bits/stdc++.h>

int main() {

    int a{}, b{}, c{}, n{}; std::cin >> a >> b >> c >> n;

    if (a > 0 && b > 0 && c > 0) {
        if (n >= 3 && (a+b+c) >= n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }

    return 0;
}
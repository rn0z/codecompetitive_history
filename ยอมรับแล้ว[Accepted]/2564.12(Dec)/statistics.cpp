#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 1;
    int n{};
    while (scanf("%d", &n) != EOF) {
        int min = 1000001;
        int max = -1000001;
        for (int i = 0; i < n; i++) {

            int c{}; cin >> c;
            if (c > max) {
                max = c;
            }
            if (c < min) {
                min = c;
            }
        }
    printf("Case %d: %d %d %d\n", tc++, min, max, (max - min));
    }

    return 0;
}
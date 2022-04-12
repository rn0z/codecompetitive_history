#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int belowZeros{};
    while (n--) {
        int temp{}; cin >> temp;

        if (temp < 0) belowZeros++;

    }

    printf("%d\n", belowZeros);

    return 0;
}
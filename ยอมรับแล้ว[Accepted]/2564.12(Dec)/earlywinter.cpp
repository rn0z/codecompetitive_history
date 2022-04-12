#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, dm; cin >> n >> dm;
    int cons = 0;
    for (int i = 0; i < n; i++) {
        int di{}; cin >> di;
        if (di <= dm) {
            printf("It hadn't snowed this early in %d years!\n", i);
            break;
        }
        cons++;
    }

    if (cons == n) {
        printf("It had never snowed this early!\n");
    }


    return 0;
}
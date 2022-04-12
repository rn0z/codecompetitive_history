#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc; cin >> tc;
    int count = 1;
    while (tc--) {
        int i = 0;
        bool all_solved = true;
        while (i < 13) {
            int solveTotal;
            cin >> solveTotal;
            if (solveTotal == 0) {
                all_solved = false;
            }
            i++;
        }
        if (all_solved) {
            printf("Set #%d: Yes\n", count++);
        } else {
            printf("Set #%d: No\n", count++);
        }
    }


    return 0;
}
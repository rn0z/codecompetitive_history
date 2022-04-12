#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int tc; cin >> tc;
    int salaries[3];
    while (tc--) {
        scanf("%d %d %d", salaries, salaries +1, salaries +2);
        sort(salaries, salaries + 3);
        printf("%d\n", salaries[1]);
    }

    return 0;
}

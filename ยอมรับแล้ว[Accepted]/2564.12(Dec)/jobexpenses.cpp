#include <bits/stdc++.h>

int main() {
    using namespace std;
    int n{}, count{};
    cin >> n;
    while (n--) {
        int k{}; cin >> k;
        if (k < 0) {
            count += k;
        }
    }
    cout << (count < 0? count *-1:count) << endl;

    return 0;
}
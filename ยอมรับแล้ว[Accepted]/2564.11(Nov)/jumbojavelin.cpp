#include <bits/stdc++.h>

using namespace std;

int main() {
    int N{}, sum{}; cin >> N;

    int i = 0;
    while (i < N) {
        int x{}; cin >> x;
        sum += x;

        i++;
    }
    cout << sum - (N - 1) << '\n';

    return 0;
}
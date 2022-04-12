#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int s, d, a{}, b{}; cin >> s >> d;
    a = s;
    b = 0;
    for (int i = 0; i <= s / 2; ++i) {
        a = s - i;
        b = i;
        if (abs(a - b) == d && a + b == s) break;
    }
    if (!(a < 0 || b < 0) && abs(b - a) == d && a + b == s) {
        a > b? cout << a << ' ' << b : cout << b << ' ' << a;
        cout << endl;
    } else {
        cout << "impossible" << endl;
    }
}

int main() {
    int n; cin >> n;
    while (n--) run_case();

    return 0;
}
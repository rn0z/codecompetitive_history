#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int P{}, D{}; cin >> P >> D;
    int tol{}, tol_a{}, tol_b{};
    vector<pair<int, int>> ab(D + 1, {0, 0});
    for (int i = 0; i < P; ++i) {

        int d, a, b; cin >> d >> a >> b;

        ab[d].first += a;

        ab[d].second += b;
        
        tol += a + b;
    }

    for (auto it = ab.begin(); it != ab.end(); ++it) {

        int wasted;

        if (it->first > it->second) {

            wasted = (it->first - (((it->first + it->second) / 2) + 1));

            cout << "A " << wasted  << ' ' << it->second << endl;

            tol_a += wasted;

            tol_b += it->second;
            

        } else if (it->second > it->first) {

            wasted = (it->second - (((it->first + it->second) / 2) + 1));

            cout << "B " << it->first << ' ' << wasted << endl;

            tol_a += it->first;

            tol_b += wasted;

        }

    }

    cout << fixed;
    cout << setprecision(10);
    cout << (double)abs(tol_a - tol_b) / tol << endl;
}

int main() {
    run_case();

    return 0;
}
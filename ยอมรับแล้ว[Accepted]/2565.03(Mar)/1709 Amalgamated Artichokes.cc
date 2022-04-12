#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int p, a, b, c, d, n;
    while (cin >> p >> a >> b >> c >> d >> n) {
        vector<double> prices{};
        for (int i = 1; i <= n; ++i)
            prices.push_back((double)p * (sin(a * i + b) + cos(c * i + d) + 2));
        

        double mx = prices[0];
        double rs{};
        for (unsigned int i = 1; i < prices.size(); ++i) {
            if (prices[i] > mx) mx = prices[i];
            if (mx - prices[i] > rs) rs = mx - prices[i];
        }

        cout << fixed;
        cout << setprecision(6);
        cout << rs << endl;
    }

}


int main() {

    run_case();

    return 0;
}
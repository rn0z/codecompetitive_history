#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n; cin >> n;
    vector<int> scores{};

    int mx = -15000000, mn = 15000000;
    while (n-- > 0) {
        int s; cin >> s;
        scores.push_back(s);
        if (s > mx) mx = s;
        if (s < mn) mn = s;
    }

    mx = mn = scores[0];
    int rs = -15000000;
    for (size_t i = 1; i < scores.size(); ++i) {
        rs = max(rs, max(mn - scores[i], mx - scores[i]));
        mn = min(mn, scores[i]);
        mx = max(mx, scores[i]);
    }

    cout << rs << endl;
    


}

int main() {
    int tc; cin >> tc;
    while (tc-- > 0)
        run_case();

    return 0;
}
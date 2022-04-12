#include <bits/stdc++.h>
#define mos_dbg

using namespace std;

void dbg_out() {
    cerr << endl;
}

template<typename HEAD, typename... TAIL> void dbg_out(HEAD H, TAIL... T) {
    cerr << H << ' ';
    dbg_out(T...);
}

#ifdef mos_dbg
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):"; dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case() {
    int s, d; cin >> s >> d;
    bool is_possible = false;
    int a{}, b{};
    for (int i = s; i >= d; --i) {
        for (int k = 0; k <= i; ++k) {
            if (k + i == s && abs(k - i) == d && i - k == d) {
                is_possible = true;
                a = i, b = k;
            }
        }
    }

    if (is_possible)
        cout << max(a, b) << ' ' << min(a, b) << endl;
    else cout << "impossible" << endl;

}

int main() {
    ios::sync_with_stdio(false);
#ifndef mos_dbg
    cin.tie(nullptr);
#endif

    int tc; cin >> tc;
    while (tc-- > 0)
        run_case();


    return 0;
}
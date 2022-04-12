#include <bits/stdc++.h>
// #define NEAL_DEBUG

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...) cerr << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

string run_case(string t)
{
    if (t.size() == 1) return t;
    else {
        int rs = 1;
        for (auto const& c:t) {
            if (c - '0' != 0) rs *= (c - '0');
        }
        return run_case(to_string(rs));
    }
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    string test{};
    cin >> test;

    cout << run_case(test) << endl;

    return 0;
}
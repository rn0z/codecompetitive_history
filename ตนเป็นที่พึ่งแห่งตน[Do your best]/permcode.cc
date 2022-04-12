#include <bits/stdc++.h>
// #define NEAL_DEBUG

using namespace std;

void dbg_out() { cout << '\n'; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cout << ' ' << H;
    dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...) cout << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case(int x) {
    string S{}, P{}, C{};
    cin >> S >> P >> C;
    int n = C.length();
    int d = (int)(pow(n, 1.5) + x) % n;
    string msg(n, '_');

    msg[d] = P[S.find(C[d])];

    for (int i = d - 1; i >= 0; i--) {
        int C_in_S = S.find(C[i]);
        int M_in_S = S.find(msg[i + 1]);
        msg[i] = P[M_in_S ^ C_in_S];
    }

    int C_in_S = S.find(C[n - 1]);
    int M_in_S = S.find(msg[0]);
    msg[n - 1] = P[M_in_S^C_in_S];

    for (int i = n - 2; i > d && i >= 0; i--) {
        int C_in_S = S.find(C[i]);
        int M_in_S = S.find(msg[i + 1]);
        msg[i] = P[M_in_S ^ C_in_S];
    }

    cout << msg << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int x{};
    while (cin >> x && x)
        run_case(x);

    return 0;
}
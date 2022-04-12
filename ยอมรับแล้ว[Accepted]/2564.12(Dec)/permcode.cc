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

void run_case(int x) {
    string s{}, p{}, c{};
    cin >> s >> p >> c;
    int n = c.size();
    int d = ((int)(pow(n, 1.5) + x)) % n;
    string msg(n, '\0');
    msg[d] = p[s.find(c[d])];

    for (int i = d - 1; i >= 0; i--) {
        // dbg(i, msg);
        int cins = s.find(c[i]);
        int mins = s.find(msg[i+1]);
        msg[i] = p[mins^cins];
    } 

    if (msg[n - 1] == '\0') {
        int cins = s.find(c[n - 1]);
        int mins = s.find(msg[0]);
        msg[n - 1] = p[mins^cins];
    }

    for (int i = n - 2; i > d; i--) {
        int cins = s.find(c[i]);
        int mins = s.find(msg[i + 1]);
        msg[i] = p[mins^cins];
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
    while (cin >> x && x > 0)
        run_case(x);

    return 0;
}
#include <bits/stdc++.h>
#define mos_dbg

using namespace std;

void dbg_out() { cerr << endl; }
template <typename HEAD, typename... TRAIL>
void dbg_out(HEAD H, TRAIL... T) { ceer << H << ' ', dbg_out(T...); }

#ifdef mos_dbg
#define dbg(...)                         \
    cerr << "(" << #__VA_ARGS__ << "):"; \
    dbg_out(__VA_ARGS__);
#else
#define dbg(...)
#endif

int main()
{
    ios::sync_with_stdio(false);
#ifndef mos_dbg
    cin.tie(nullptr);
#endif

    return 0;
}
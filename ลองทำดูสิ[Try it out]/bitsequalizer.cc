#include <bits/stdc++.h>
#define NEAL_DEBUG

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

void swap(string &S, string T) {

    return;
}

void run_case(int t)
{
    int rs{};
    string S{}, T{};
    cin >> S >> T;
}   

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tc{}, t = 1;
    cin >> tc;


    while (tc-- > 0)
        run_case(t++);

    return 0;
}
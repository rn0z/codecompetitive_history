#include <bits/stdc++.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
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

void run_case()
{
    string A, B;
    int a, b;
    cin >> A >> B;
    string Af{}, Bf{};

    for (auto it = A.rbegin(); it != A.rend(); it++)
        Af+= *it;

    for (auto it = B.rbegin(); it != B.rend(); it++)
        Bf+= *it;

    a = stoi(Af);
    b = stoi(Bf);

    if (a > b) cout << Af;
    else cout << Bf;
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    run_case();

    return 0;
}
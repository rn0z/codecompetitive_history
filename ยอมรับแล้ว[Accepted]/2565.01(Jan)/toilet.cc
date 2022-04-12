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

void run_case(string seq)
{
    int U{}, D{}, S{};
    if (seq[0] == 'D') {
        if (seq[1] == 'D') {
            U += 1;
            D += 0;
            S += 0;
        } else {
            U += 1;
            D += 2;
            S += 1;
        }
    } else {
        if (seq[1] == 'D') {
            U += 2;
            D += 1;
            S += 1;
        } else {
            U += 0;
            D += 1;
            S += 0;
        }
    }
    char prev = seq[1];
    for (size_t i = 2; i < seq.size(); i++) {
        if (seq[i] == 'D') {
            U += 2;
            D += 0;
            if (prev == 'U') S++;
        } else {
            U += 0;
            D += 2;
            if (prev == 'D') S++;
        }

        prev = seq[i];
    }
    cout << U << endl << D << endl << S << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    string seq{};
    cin >> seq;

    run_case(seq);


    return 0;
}
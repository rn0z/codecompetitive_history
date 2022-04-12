#include <bits/stdc++.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

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

void run_case()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d && (a || b || c || d)) {
        if ((a == 1 && b == 2) || (a == 2 && b == 1)) {
            if ((c == 1 && d == 2) || (c == 2 && d == 1)) {
                cout << "Tie.";
            } else {
                cout << "Player 1 wins.";
            }
        } else if ((c == 1 && d == 2) || (c == 2 && d == 1)) {
            if ((a == 1 && b == 2) || (a == 2 && b == 1)) {
                cout << "Tie.";
            } else {
                cout << "Player 2 wins.";
            }
        } else if (a == b && c == d) {
            if (a > c)
                cout << "Player 1 wins.";
            else if (a == c)
                cout << "Tie.";
            else
                cout << "Player 2 wins.";
        } else if (a == b && !(c == d)) {
            cout << "Player 1 wins.";
        } else if (c == d && !(a == b)) {
            cout << "Player 2 wins.";
        } else {
            int p1 = stoi(to_string(max(a,b)) + to_string(min(a,b)));
            int p2 = stoi(to_string(max(c,d)) + to_string(min(c,d)));

            if (p1 > p2) cout << "Player 1 wins.";
            else if (p1 < p2) cout << "Player 2 wins.";
            else cout << "Tie.";
        }
        cout << endl;
    }
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
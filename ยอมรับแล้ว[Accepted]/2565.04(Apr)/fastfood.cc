#include <bits/stdc++.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
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
    vector<pair<vector<int>, int>> prizes{};
    int n{}, m{};

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {

        int k, cash;
        vector<int> req{};

        cin >> k;

        while (k-- > 0) {
            int type; cin >> type;
            req.push_back(type);
        }

        cin >> cash;
        prizes.push_back({req, cash});

    }

    map<int, int> collect{};

    for (int i = 1; i <= m; ++i) {
        int stck; cin >> stck;
        collect[i] = stck;
    }

    int claimed{};

    for (auto& p:prizes) {

        vector<int> req = p.first;

        bool enough = true;

        for (;enough;) {
            for (auto& r:req) {
                if (collect[r] == 0)
                    enough = false;
            }
            
            if (enough) {
                for (auto& r:req) {
                    --collect[r];
                }
                claimed += p.second;
            }
        }
    }
    cout << claimed << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests{};
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
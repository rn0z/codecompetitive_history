#include <bits/stdc++.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define NEAL_DEBUG

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef NEAL_DEBUG
#define dbg(...) cerr << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

array<string, 3> key = {
    "qwertyuiop",
    "asdfghjkl ",
    "zxcvbnm   "
};

unordered_map<char, pair<int, int>> chmap {};

void run_case() {
    string base{};
    int n;
    cin >> base >> n;

    for (int r = 0; r < 3; ++r) 
        for (int c = 0; c < key[r].size(); ++c) 
            if (key[r][c] != ' ') 
                chmap[key[r][c]] = {c, r};

    vector<pair<string, int>> words;
    for (;n-- > 0;) {
        int count{}, i{};
        string w;

        cin >> w;
        for (int i = 0; i < base.size(); ++i) {
            if (w[i] == base[i]) continue;

            auto a = chmap[base[i]];
            auto b = chmap[w[i]];
            count +=  abs(a.first - b.first) + abs(a.second - b.second);
        }
        words.push_back({w, count});
    }

    sort(words.begin(), words.end(), [](auto& left, auto& right) {
        if (left.second == right.second)
            return left.first < right.first;
        else
            return left.second < right.second;
    });
    
    for (auto & w:words)
        cout << w.first << ' ' << w.second << endl;
}

int main() {
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
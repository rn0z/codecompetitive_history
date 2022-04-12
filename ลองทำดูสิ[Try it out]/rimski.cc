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

typedef pair<int, string> is;

int value(char letter)
{
    switch (letter) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
    }
    return 0;
}

int RtoA(string R)
{
    int n = R.size();
    int rs{};
    for (int i = 0; i < n; i++)
        if (R[i + 1] && R[i] < R[i + 1]) {
            rs += value(R[i + 1]) - value(R[i]);
            ++i;
        } else rs += value(R[i]);
    
    return rs;
}

string AtoR(int A)
{
    string rs{};
    vector<is> convert({
        {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},
        {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    });
    for (auto &[val, rom]:convert) {
        while (A >= val) {
            rs += rom;
            A = A - val;
        }
    }
    return rs;
}

void run_case(string B)
{
    int rs = RtoA(B);
    sort(B.begin(), B.end());
    do {
        int val = RtoA(B);
        if (val < rs) {
            rs = val;
        }
    } while (next_permutation(B.begin(), B.end()));
    cout << AtoR(rs) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    string B; cin >> B;
    run_case(B);

    return 0;
}
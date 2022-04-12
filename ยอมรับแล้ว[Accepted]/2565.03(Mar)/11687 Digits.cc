#include <bits/stdc++.h>
#define mos_dbg

using namespace std;

void dbg_out() { cerr << endl; }
template<typename HEAD, typename... TRAIL>
void dbg_out(HEAD H, TRAIL... T) { cerr << H << ' ', dbg_out(T...); }

#ifdef mos_dbg
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):"; dbg_out(__VA_ARGS__);
#else
    #define dbg(...)
#endif


int recur(int i, string numb)
{
    dbg(i, numb);
    if (numb == to_string(numb.length()))
        return i;

    return recur(++i, to_string(numb.length()));
}

void run_case(string str)
{
    cout << recur(1, str) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef mos_dbg
    cin.tie(nullptr);
#endif

    string str{};
    while (cin >> str && str != "END")
        run_case(str);

    return 0;
}
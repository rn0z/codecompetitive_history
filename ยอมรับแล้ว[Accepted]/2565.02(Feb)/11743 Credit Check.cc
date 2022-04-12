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

int add_digits(int a)
{
    string str = to_string(a);
    if (str.size() > 1)
        return ((str[0] - '0') + (str[1] - '0'));

    return a;
}

void run_case()
{
    string str, numb = "";
    getline(cin, str);
    stringstream ssin(str);
    
    while (ssin.good()) {
        string group;
        ssin >> group;
        numb += group;
    }
    int d = 0, un_d = 0;
    for (int i = 0; i < numb.length(); i += 2)
        d += add_digits((numb[i] - '0')*2);
    for (int i = 1; i < numb.length(); i += 2)
        un_d += (numb[i] - '0');

    int total = d + un_d;

    if (total == 0 || total % 10 == 0)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests{};
    cin >> tests;
    cin.ignore();

    while (tests-- > 0)
        run_case();

    return 0;
}
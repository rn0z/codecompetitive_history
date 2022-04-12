#include <bits/stdc++.h>
// #define NEAL_DEBUG

using namespace std;

void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#ifdef NEAL_DEBUG
#define dbg(...) cout << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case() {
    int N{};
    while (cin >> N && N) {
        string msg{}, encode{}, reverse_msg{}; cin >> msg;
        for (string::reverse_iterator rev_it = msg.rbegin(); rev_it != msg.rend(); rev_it++)
            reverse_msg += *rev_it;

        for (char const& c:reverse_msg) {
            int i = ((c + N) - 65) % 28;
            if (c == '_') {
                if (N == 1)
                    encode += '.';
                else if (N >= 2)
                    encode += 'A' + (N - 2);
            } else if (c == '.') {
                if (N == 27)
                    encode += '_';
                else
                    encode += 'A' + (N - 1);
            } else {
                if (i == 26 || c + N == 91) {
                    encode += '_';
                } else if (i == 27 || c + N == 92) {
                    encode += '.';
                } else {
                    encode += 'A' + i;
                }
            }
        }
        cout << encode << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    run_case();

    return 0;
}
#include <bits/stdc++.h>
#define NEAL_DEBUG

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef NEAL_DEBUG
#define dbg(...) cerr << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

vector<pair<char, int>> v{};

void run_case() {
    char o{}; string msg{}; cin >> o >> msg;
    if (o == 'E') {
        string encode{};
        char prev = msg[0];
        encode += prev;
        int count = 1;
        for (string::iterator it = ++msg.begin(); it <= msg.end(); it++) {
            if (*it == prev) {
                count++;
            } else {
                encode += to_string(count) + *it;
                count = 1;
                prev = *it;
            }
        }
        cout << encode << endl;
    } else {
        string decode{};
        for (string::iterator it = msg.begin(); it != msg.end(); it++) {
            if (isalpha(*it) || *it == '_' || *it == '!' || *it == '.') {

            } else {
                string characters ((int)(*it - '0'), *(it - 1));
                decode += characters;
            }
        }
        cout << decode << endl;
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
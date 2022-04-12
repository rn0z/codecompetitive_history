#include <bits/stdc++.h>
#define MANATSAWEE_DEBUG

using namespace std;

void dbg_out() {
    cerr << endl;
}

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef MANATSAWEE_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case() {
    int is_squish{};
    int lanes, width; cin >> lanes >> width;
    int field[lanes*width][lanes + 1][width]{},
    car_path[lanes*width][lanes + 1][width]{},
    offset[lanes]{},
    interval[lanes]{},
    spd[lanes]{};
    bool is_enters{}; // is enters field yet?

    for (int i = 0, offs, intvl, speed; i < lanes && cin >> offs >> intvl >> speed; ++i)
        offset[i] = offs, interval[i] = intvl, spd[i] = speed;

    for (int i = 0; i < lanes*width; ++i) {
        for (int k = 0, dir = 1; k < lanes; ++k, ++dir) {
            int offs = offset[k];
            dir = dir & 1;
            for (int q = 0; q < width; ++q) {
                if (dir) {
                    if (offs == q) {
                        field[i][k][q] = 1;
                        offs += interval[k];
                    }
                } else {
                    if (offs == q) {
                        field[i][k][(width - 1 ) - q] = 1;
                        offs += interval[k];
                    }
                }
            }
            offset[k] += spd[k];
            if (offset[k] >= spd[k]) {
                offset[k] %= interval[k];
            }
        }
    }

    int P;
    string M;
    cin >> P >> M;
    pair<int, int> froggie{P, lanes};

    field[0][froggie.second][froggie.first] = -1;

    bool exist{};
    int n = M.length();
    for (int i = 0, t = 1; i < n && !is_squish && t < lanes*width; ++i, ++t) {
        if (M[i] == 'U' && froggie.second >= 0) {
            --froggie.second;
            if (froggie.second == -1) {
                exist = true;
                is_squish = false;
                break;
            }
        } else if (M[i] == 'D') {
            ++froggie.second;
            if (froggie.second == lanes) {
                is_squish = true;
                break;
            }
        } else if (M[i] == 'L') {
            --froggie.first;
            if (froggie.first == -1) {
                is_squish = true;
                break;
            }
        } else if (M[i] == 'R')  {
            ++froggie.first;
            if (froggie.first == width) {
                is_squish = true;
                break;
            }
        }
        if (!field[t][froggie.second][froggie.first]) {
            field[t][froggie.second][froggie.first] = -1;
        } else {
            is_squish = true;
            break;
        }
    }

    if (is_squish || !exist)
        cout << "squish" << endl;
    else
        cout << "safe" << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
#ifndef MANATSAWEE
    cin.tie(nullptr);
#endif //  MANATSAWEE

    run_case();

    return 0;
}
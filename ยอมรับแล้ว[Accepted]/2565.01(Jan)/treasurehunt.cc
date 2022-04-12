#include <bits/stdc++.h>

using namespace std;


void run_case(int r, int c) {
    pair<int, int> n_pos{};
    pair<int, int> t_pos{};
    bool p_memo[r][c]{};
    string cmd[r];

    int i, k;
    for (i = 0; i < r; i++)
        cin >> cmd[i];
            // for (k = 0; k < c; k++)
                // if (cmd[i][k] == 'T') {
                    // t_pos = {i, k};
                    // break;
                // }

    int moved{};
    p_memo[0][0] = true;
    bool isOut{}, isLost{}, isReached{};
    for (n_pos.first = 0; n_pos.first < r && (!isOut && !isLost && !isReached);) {
        for (n_pos.second = 0; n_pos.second < c;) {
            cerr << n_pos.first << ' ' << n_pos.second << endl;
            char ch = cmd[n_pos.first][n_pos.second];
            if (ch == 'N') {
                n_pos.first--;
            } else if (ch == 'S') {
                n_pos.first++;
            } else if (ch == 'W') {
                n_pos.second--;
            } else if (ch == 'E') {
                n_pos.second++;
            } else {
                if (p_memo[n_pos.first][n_pos.second]) {
                    isReached = !isReached;
                    break;
                }
            }

            moved++;
            if (n_pos.first < 0 || n_pos.first >= r || n_pos.second < 0 || n_pos.second >= c) {
                isOut = !isOut;
                break;
            } else if (p_memo[n_pos.first][n_pos.second]) {
                isLost = !isLost;
                break;
            } else if (n_pos == t_pos) {
                isReached = !isReached;
                break;
            }
            p_memo[n_pos.first][n_pos.second] = true;
        }
    }
    if (isOut) cout << "Out";
    if (isLost) cout << "Lost";
    if (isReached) cout << moved;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    int r, c;
    cin >> r >> c;
    run_case(r, c);

    return 0;
}
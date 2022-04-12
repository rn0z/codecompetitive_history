#include <bits/stdc++.h>

using namespace std;


void run_case(int R, int C) {
    bool path_memo[R][C]{};
    string *cmd = new string[R]{};
    pair<int, int> now{};
    pair<int, int> t{};

    now = make_pair(0, 0);
    path_memo[0][0] = 1;
    for (int i = 0; i < R && cin >> *(cmd+i); i++)
        for (string::size_type k = 0; k < (cmd+i)->length(); k++)
            if ((*(cmd+i))[k] == 'T') t = make_pair(i, k);

    bool isOut{}, isLost{}, isReached{};
    int moved{};
    for (int i = 0; i < R && (!isOut && !isLost && !isReached); i++) {
        cerr << "TRESURE:" << t.first << ' ' << t.second << endl;
        cerr << "DIR. NOW:"<< now.first << ' ' << now.second << endl;
        cerr << endl;
        for (char const& c:*(cmd+i)) {
            if (c == 'N') {
                now.first--;
                if (t == now) {
                    isReached = true;
                    break;
                } 
                if (now.first < 0) {
                    isOut = true;
                    break;
                } else if (path_memo[now.first][now.second]) {
                    isLost = true;
                    break;
                } else {
                    path_memo[now.first][now.second] = 1;
                }
                moved++;
            } else if (c == 'S') {
                now.first++;
                moved++;
            if (t == now) {
                isReached = true;
                break;
            } 
                if (now.first >= R) {
                    isOut = true;
                    break;
                } else if (path_memo[now.first][now.second]) {
                    isLost = true;
                    break;
                } else {
                    path_memo[now.first][now.second] = 1;
                }
            } else if (c == 'W') {
                now.second--;
                moved++;
            if (t == now) {
                isReached = true;
                break;
            } 
                if (now.second < 0) {
                    isOut = true;
                    break;
                } else if (path_memo[now.first][now.second]) {
                    isLost = true;
                    break;
                } else {
                    path_memo[now.first][now.second] = 1;
                }
            } else if (c == 'E') {
                now.second++;
                moved++;
            if (t == now) {
                isReached = true;
                break;
            } 
                if (now.second >= C) {
                    isOut = true;
                    break;
                } else if (path_memo[now.first][now.second]) {
                    isLost = true;
                    break;
                } else {
                    path_memo[now.first][now.second] = 1;
                }
            }
        }
    }

    cerr << "TRESURE:" << t.first << ' ' << t.second << endl;
    cerr << "DIR. NOW:"<< now.first << ' ' << now.second << endl;
    cerr << endl;
    // cerr << isReached << endl;

    if (isLost) {
        cout << "Lost";
    } else if (isOut) {
        cout << "Out";
    } else if (isReached) {
        cout << moved;
    } else {
        cout << "Lost";
    }
    cout << endl;

    return;
}

int main() {
    ios::sync_with_stdio(false);

    int R, C; cin >> R >> C;
    run_case(R, C);

    return 0;
}
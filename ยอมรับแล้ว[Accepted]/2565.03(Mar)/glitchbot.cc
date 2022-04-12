#include <bits/stdc++.h>

using namespace std;

enum Dir {
    north, // top
    south, // down
    west, // left
    east // right
};

typedef pair<int, int> pii;

bool is_equal(pair<int, int> a, pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

void run_case() {
    pii des{}; // destination
    int n{};
    array<char, 3> instr = {'F', 'L', 'R'};
    cin >> des.first >> des.second >> n;
    array<char, 50> instr_lst{};
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        instr_lst[i] = str[0];
    }

    bool reached{};
    for (int k = 0; k < n && !reached; ++k) {
        for (int q = 0; q < 3; ++q) {
            array<char, 50> instr_cpy{};
            instr_cpy = instr_lst;
            instr_cpy[k] = instr[q];
            Dir dir = north;
            pii pos = {0, 0};
            for (int i = 0; i < n; ++i) {
                if (instr_cpy[i] == 'F') {
                    if (dir == north)
                        ++pos.second;
                    else if (dir == south)
                        --pos.second;
                    else if (dir == west)
                        --pos.first;
                    else
                        ++pos.first;
                } else if (instr_cpy[i] == 'L') {
                    if (dir == north)
                        dir = west;
                    else if (dir == south)
                        dir = east;
                    else if (dir == west)
                        dir = south;
                    else
                        dir = north;
                } else {
                    if (dir == north)
                        dir = east;
                    else if (dir == south)
                        dir = west;
                    else if (dir == west)
                        dir = north;
                    else
                        dir = south;
                }
            }
            if (is_equal(des, pos)) {
                cout << k + 1 << ' ';
                if (instr[q] == 'F')
                    cout << "Forward";
                else if (instr[q] == 'L')
                    cout << "Left";
                else
                    cout << "Right";
                cout << endl;
                reached = true;
                break;
            }
        }
    }
}

int main() {
    run_case();


    return 0;
}
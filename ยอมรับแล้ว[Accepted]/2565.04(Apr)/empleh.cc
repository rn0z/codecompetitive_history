#include <bits/stdc++.h>

using namespace std;

int main() {
    string white, black;
    getline(cin, white);
    getline(cin, black);
    white = white.substr(7);
    black = black.substr(7);

    vector<string> posb{};
    vector<string> posw{};

    stringstream ss_w(white);
    stringstream ss_b(black);

    string f[17] {
        "+---+---+---+---+---+---+---+---+",
        "|...|:::|...|:::|...|:::|...|:::|",
        "+---+---+---+---+---+---+---+---+",
        "|:::|...|:::|...|:::|...|:::|...|",
        "+---+---+---+---+---+---+---+---+",
        "|...|:::|...|:::|...|:::|...|:::|",
        "+---+---+---+---+---+---+---+---+",
        "|:::|...|:::|...|:::|...|:::|...|",
        "+---+---+---+---+---+---+---+---+",
        "|...|:::|...|:::|...|:::|...|:::|",
        "+---+---+---+---+---+---+---+---+",
        "|:::|...|:::|...|:::|...|:::|...|",
        "+---+---+---+---+---+---+---+---+",
        "|...|:::|...|:::|...|:::|...|:::|",
        "+---+---+---+---+---+---+---+---+",
        "|:::|...|:::|...|:::|...|:::|...|",
        "+---+---+---+---+---+---+---+---+"
    };

    string pos{};
    while (ss_w.good() && ss_w.str().size() != 0) {

        getline(ss_w, pos, ',');

        char piece;
        int c, r;
        if (pos.size() == 3) {
            piece = pos[0];
            c = (pos[1] - 'a');
            r = 8 - (pos[2] - '0');

        } else {
            piece = 'P';
            c = pos[0] - 'a';
            r = 8 - (pos[1] - '0');
        }
        
        f[r * 2 + 1][c * 4 + 2] = piece;
    }
    
    while (ss_b.good() && ss_b.str().size() != 0) {

        getline(ss_b, pos, ',');
        transform(pos.begin() ,pos.end() ,pos.begin(), [](unsigned char c) {
            return tolower(c);
        });

        char piece;
        int c, r;
        if (pos.size() == 3) {
            piece = pos[0];
            c = (pos[1] - 'a');
            r = 8 - (pos[2] - '0');
        } else {
            piece = 'p';
            c = (pos[0] - 'a');
            r = 8 - (pos[1] - '0');
        }

        f[r * 2 + 1][c * 4 + 2] = piece;
    }

    for (int r = 0; r < 17; ++r) {
        cout << f[r] << endl;
    }

    return 0; 
}
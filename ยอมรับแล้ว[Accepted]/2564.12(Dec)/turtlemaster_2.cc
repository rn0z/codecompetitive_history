#include <bits/stdc++.h>

using namespace std;

enum Facing {t, b, l, r};

void move(string *pF, pair<int, int> *t_pos, Facing f) {
    int r = t_pos->first;
    int c = t_pos->second;
    switch (f) {
        case Facing::t:
            if (r-1 > -1 && (pF[r-1][c] == '.' || pF[r-1][c] == 'D'))
                *t_pos = make_pair(r-1, c);
            break;
        case Facing::b:
            if (r+1 < 8 && (pF[r+1][c] == '.' || pF[r+1][c] == 'D'))
                *t_pos = make_pair(r+1, c);
            break;
        case Facing::l:
            if (c-1 > -1 && (pF[r][c-1] == '.' || pF[r][c-1] == 'D'))
                *t_pos = make_pair(r, c-1);
            break;
        case Facing::r:
            if (c+1 < 8 && (pF[r][c+1] == '.' || pF[r][c+1] == 'D'))
                *t_pos = make_pair(r, c+1);
            break;
    }
}

void turn(Facing* f, char const& c) {
    if (c == 'R') {
        switch(*f) {
            case Facing::t:
                *f = Facing::r;
            break;
            case Facing::b:
                *f = Facing::l;
            break;
            case Facing::l:
                *f = Facing::t;
            break;
            case Facing::r:
                *f = Facing::b;
            break;
        }
    }
    if (c == 'L') {
        switch(*f) {
            case Facing::t:
                *f = Facing::l;
            break;
            case Facing::b:
                *f = Facing::r;
            break;
            case Facing::l:
                *f = Facing::b;
            break;
            case Facing::r:
                *f = Facing::t;
            break;
        }
    }
}

void fire(string *pF, pair<int, int> t_pos, Facing f) {
    int r = t_pos.first;
    int c = t_pos.second;
    switch (f) {
        case Facing::t:
            if (r-1 > -1 && pF[r-1][c] == 'I')
                pF[r-1][c] = '.';
            break;
        case Facing::b:
            if (r+1 < 8 && pF[r+1][c] == 'I')
                pF[r+1][c] = '.';
            break;
        case Facing::l:
            if (c-1 > -1 && pF[r][c-1] == 'I')
                pF[r][c-1] = '.';
            break;
        case Facing::r:
            if (c+1 < 8 && pF[r][c+1] == 'I')
                pF[r][c+1] = '.';
            break;
    }
}

void run_case(string* pF, string c, pair<int, int> *t_pos, pair<int, int> *d_pos) {
    Facing f = Facing::r;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] == 'F')
            move(pF, t_pos, f);
        if (c[i] == 'L' || c[i] == 'R')
            turn(&f, c[i]);
        if (c[i] == 'X')
            fire(pF, *t_pos, f);
    }


    if (*t_pos == *d_pos) {
        cout << "Diamond!" << endl;
    } else {
        cout << "Bug!" << endl;
    }
}

int main() {
    string *field = new string[8];
    string commands{};
    pair<int, int> t_pos(7,0), d_pos;
    for (int i = 0; i < 8; i++) {
        cin >> *(field + i);
        for (int l = 0; l < 8; l++)
            if (field[i][l] == 'D')
                d_pos = make_pair(i, l);
    }
    cin >> commands;
    
    run_case(field, commands, &t_pos, &d_pos);

    return 0;
}
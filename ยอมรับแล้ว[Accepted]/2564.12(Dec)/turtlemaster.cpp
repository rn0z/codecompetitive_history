#include <bits/stdc++.h>

using namespace std;
enum Facing {top, bottom, left, right};

// Facing turn(Facing& now) {
void turn(Facing* now, char const& dir) {
    switch (*now) {
    case Facing::top:
        if (dir == 'R') *now = Facing::right;
        else *now = Facing::left;
        break;
    case Facing::bottom:
        if (dir == 'R') *now = Facing::left;
        else *now = Facing::right;
        break;
    case Facing::left:
        if (dir == 'R') *now = Facing::top;
        else *now = Facing::bottom;
        break;
    case Facing::right:
        if (dir == 'R') *now = Facing::bottom;
        else *now = Facing:: top;
        break;
    }

    return;
}

int move(string* field, tuple<int, int>* pos, Facing* now) {
    int r, c;
    tie(r, c) = *pos;
    switch (*now) {
    case Facing::top:
        if (r-1 > -1 && (field[r-1][c] == '.' || field[r-1][c] == 'D'))
            *pos = make_tuple(r-1, c);
        else return -1;
        break;
    case Facing::bottom:
        if (r+1 < 8 && (field[r+1][c] == '.' || field[r+1][c] == 'D'))
            *pos = make_tuple(r+1, c);
        else return -1;
        break;
    case Facing::left:
        if (c-1 > -1 && (field[r][c-1] == '.' || field[r][c-1] == 'D'))
            *pos = make_tuple(r, c-1);
        else return -1;
        break;
    case Facing::right:
        if (c+1 < 8 && (field[r][c+1] == '.' || field[r][c+1] == 'D'))
            *pos = make_tuple(r, c+1);
        else return -1;
        break;
    
    }
    return 1;
}

int fire(string* field, tuple<int, int>& pos, Facing* now) {
    int r{}, c{};
    tie(r, c) = pos;

    if (*now == Facing::top)
        if (r-1 > -1 && field[r-1][c] == 'I')
            field[r-1][c] = '.';
        else return -1;

    else if (*now == Facing::bottom)
        if (r+1 < 8 && field[r+1][c] == 'I')
            field[r+1][c] = '.';
        else return -1;

    else if (*now == Facing::right)
        if (c+1 < 8 && field[r][c+1] == 'I')
            field[r][c+1] = '.';
        else return -1;

    else
        if (c-1 > -1 && field[r][c-1] == 'I')
            field[r][c-1] = '.';
        else return -1;

    return 1;
}

void run_case(string* field, string command) {
    Facing turtle = Facing::right;
    int n = command.size();
    tuple<int, int> pos(7, 0);

    int isBug = 0;

    for (int i = 0; i < n && isBug != -1; i++)
        if (command[i] == 'F')
            isBug = move(field, &pos, &turtle);

        else if (command[i] == 'L' || command[i] == 'R')
            turn(&turtle, command[i]);

        else
            isBug = fire(field, pos, &turtle); 

    tuple<int, int> d_pos{};
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            if (field[r][c] == 'D') {
                d_pos = make_tuple(r, c);
                break;
            }
        }
    }

    if (isBug == -1)
        cout << "Bug!" << endl;
    else if (get<0>(pos) == get<0>(d_pos) && get<1>(pos) == get<1>(d_pos))
        cout << "Diamond!" << endl;
    else cout << "Bug!" << endl;
}

int main()
{
    ios::sync_with_stdio(false);

    string* pfield = new string[8]{};
    string command{};
    for (int i = 0; i < 8; i++)
        cin >> *(pfield + i);
    
    cin >> command;

    
    run_case(pfield, command);

    return 0;
}
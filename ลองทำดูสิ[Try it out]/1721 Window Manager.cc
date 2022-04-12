#include <bits/stdc++.h>

using namespace std;

enum Commands {OPEN, CLOSE, RESIZE, MOVE};

int main() {
    int xmx, ymx; cin >> xmx >> ymx;

    vector<pair<pair<int, int>, pair<int, int>>> wins{};

    int win[1000000000][1000000000]{};

    for (int i = 1;!cin.eof(); ++i) {

        string cmd{}; cin >> cmd;

        if (cmd == "OPEN") {

            int x, y, w, h; cin >> x >> y >> w >> h;

            bool isValid = false;

            if (isValid)

                wins.push_back({{x, y}, {w, h}});

            else

                cout << "Command " << i <<':' << " OPEN -" << " window does not fit" << endl;

        }

        if (cmd == "CLOSE") {

            int x, y; cin >> x >> y;

            bool closed{};

            if (!closed)

                cout << "Command " << i <<':' << " CLOSE -" << " no window at given position" << endl;

        }

        if (cmd == "RESIZE") {

            int x, y, w, h; cin >> x >> y >> w >> h;

        }

        if (cmd == "MOVE") {

            int x, y, dx, dy; cin >> x >> y >> dx >> dy;

        }
    }

    cout << wins.size() << ' ' << "window(s):" << endl;
    for (auto const& win:wins) {
        pair<int, int> xy = win.first;
        pair<int, int> wh = win.second;
        cout << xy.first << ' ' << xy.second << ' ';
        cout << wh.first << ' ' << wh.second << endl;
    }


    return 0;
}
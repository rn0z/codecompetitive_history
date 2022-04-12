#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int w, h, n; cin >> w >> h >> n;
    vector<pair<int, int>> shts{};

    int fld[2][30][30]{};
    int p[2]{};

    for (int t = 0; t < 2; ++t) {
        for (int r = 0; r < h; ++r) {
            string line{}; cin >> line;
            for (int c = 0; c < w; ++c) {
                if (line[c] == '#') {
                    fld[t][r][c] = 1;
                    ++p[t];
                }
            }
        }
    }

    int x, y;
    for (int i = 0; i < n && cin >> x >> y; ++i)
        shts.push_back({x, (h - 1) - y});

    bool t{};
    bool ended{};
    for (auto const& s:shts) {

        if (ended) break;

        if (fld[!t][s.second][s.first]) {

            fld[!t][s.second][s.first] = 0;

            --p[!t];

        } else t = !t;

        if (p[1] == 0 && !t)

            t = !t;

        else {

            if (t && p[0] == 0)
                ended = true;
            if (!t && p[1] == 0)
                ended = true;

        }
    }

    if (p[1] == 0 && p[0] > p[1]) cout << "player one wins";
    else if (p[0] == 0 && p[1] > p[0]) cout << "player two wins";
    else cout << "draw";
    cout << endl;
}

int main() {
    int tc; cin >> tc;
    while (tc-- > 0)
        run_case();


    return 0;
}
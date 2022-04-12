#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int tc = 1;
void run_case(int w, int n) {
    vector<pair<string, int>> payload{};
    vi points{};
    vi widths{};
    int rs = 0;
    
    int c_max = -99999;
    for (int t = 0; t < n; ++t) {
        string w;
        int c;
        cin >> w >> c;
        if (c > c_max) c_max = c;
        payload.push_back({w, c});
    }

    int pt_h = 0, currwidth = 0;
    for (auto const& p:payload) {
        int pt = 8 + ceil((float)(40.0 * (p.second - 4.0)) / (c_max - 4.0));
        int width = ceil((float)(9 * p.first.length() * pt) / 16);

        if (currwidth + width > w) {
            rs += pt_h;
            pt_h = 0;
            currwidth = 0;
        }
        pt_h = (pt_h < pt)? pt: pt_h;
        currwidth += width + 10;
    }

    rs += pt_h;

    cout << "CLOUD" << ' ' << tc << ':'<< ' ' << rs << endl;
    ++tc;
}

int main() {
    int w, n;
    while (cin >> w >> n && (w && n))
        run_case(w, n);

    return 0;
}
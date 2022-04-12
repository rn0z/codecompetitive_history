#include <bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail ...T) {
    cerr << ' ' << H; dbg_out(T...);
}

#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

typedef vector<string> vstr;

map<char, pair<int, int>> numb{};
map<char, pair<int, int>> lower{};
map<char, pair<int, int>> upper{};

void run_case() {
    vstr rect{};
    string line;
    for (unsigned int i = 0; !cin.eof(); ++i) {
        getline(cin, line);
        if (line != "") rect.push_back(line);
        for (unsigned int k = 0; k < line.length(); ++k) {
            if (line[k] >= 48 && line[k] <= 57)
                numb[line[k]] = make_pair(k, i);
            else if (line[k] >= 65 && line[k] <= 90)
                upper[line[k]] = make_pair(k, i);
            else if (line[k] >= 97 && line[k] <= 122)
                lower[line[k]] = make_pair(k, i);
        }
        vector<pair<int, int>> cont{};
        for (auto n:numb)
            cont.push_back(n.second);
        for (auto l:lower)
            cont.push_back(l.second);
        for (auto u:upper)
            cont.push_back(u.second);

        if (line == "" || cin.eof()) {
            // vector<pair<int, int>>::iterator a = cont.begin();
            // for (auto b = a + 1; b != cont.end(); ++b) {
            //     if (a->first == b->first) {
            //         int mx = max(a->second, b->second),
            //             mn = min(a->second, b->second);
            //     } else if (a->second == b->second) {
            //     }
           //     a = b;
            // }

            int pre = 0;
            for (unsigned int k = 1; k < cont.size(); ++k) {
                pair<int, int> a = cont[pre];
                pair<int, int> b = cont[k];
                if (a.first == b.first) {
                    int mx = max(a.second, b.second),
                        mn = min(a.second, b.second);
                    for (int q = mn + 1; q < mx; ++q)
                        if (rect[q][a.first] == '-')
                            rect[q][a.first] = '+';
                        else if (rect[q][a.first] == '.')
                            rect[q][a.first] = '|';

                } else if (a.second == b.second) {
                    int mx = max(a.first, b.first),
                        mn = min(a.first, b.first);
                    for (int q = mn + 1; q < mx; ++q) {
                        if (rect[a.second][q] == '|')
                            rect[a.second][q] = '+';
                        else if (rect[a.second][q] == '.')
                            rect[a.second][q] = '-';
                    }
                }
                pre = k;
            }
            

            for (auto r:rect)
                cout << r << endl;
            cout << endl;

            i = -1;
            rect.clear();
            numb.clear();
            upper.clear();
            lower.clear();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);

    run_case();

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<char, pair<int, string>>> w{};
    vector<pair<char, pair<int, string>>> r{};
    int m{};
    char t{};
    string j{};
    while (cin >> m && m != -1) {
        cin >> t >> j;
        if (!j.compare("right")) r.push_back(make_pair(t, make_pair(m, j)));
        else w.push_back(make_pair(t, make_pair(m, j)));
    }

    int t_total{};
    for (auto const& d: r) {
        int t_penalty{};
        for (auto const & o:w)
            if (o.first == d.first)
                t_penalty += 20;
        t_total += d.second.first + t_penalty;
    }

    cout << r.size() << ' ' << t_total << '\n';

    return 0;
}
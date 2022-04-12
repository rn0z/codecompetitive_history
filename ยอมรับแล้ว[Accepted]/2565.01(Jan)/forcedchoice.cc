#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, s; cin >> n >> p >> s;

    while (s--) {
        int m; cin >> m;
        vector<int> data{};
        for (int i = 0; i < m; i++) {
            int card;
            cin >> card;
            data.push_back(card);
        }

        bool isKeep{};
        for (auto const& i:data) {
            cerr << i << endl;
            if (i == p) {
                cout << "KEEP" << endl;
                isKeep = true;
            }
        }

        if (!isKeep) cout << "REMOVE" << endl;
        cerr << endl;
    }

    return 0;
}
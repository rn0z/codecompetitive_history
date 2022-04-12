#include <bits/stdc++.h>

using namespace std;

unordered_map<char, double> atomic_name{
    {'C', 12.01},
    {'H', 1.008},
    {'O', 16.00},
    {'N', 14.01}
};

void run_case() {
    vector<pair<char, int>> each_{};
    string formula; cin >> formula;
    double rs{};
    for (size_t i = 0; i < formula.size(); ++i) {
        char elem = formula[i];
        if (atomic_name[formula[i]]) {
            string n = "";
            for (size_t subi = i + 1; subi < formula.size() && !atomic_name[formula[subi]]; ++subi) {
                n += formula[subi];
                i++;
            }
            if (n != "1" && n != "")
                each_.push_back({elem, stoi(n)});
            else if (n == "")
                each_.push_back({elem, 1});
        }
    }

    for (auto const &e:each_)
        rs += atomic_name[e.first] * e.second;

    cout << fixed;
    cout << setprecision(3);
    cout << rs << endl;
}

int main() {
    int tc; cin >> tc;

    while (tc-- > 0)
        run_case();

}
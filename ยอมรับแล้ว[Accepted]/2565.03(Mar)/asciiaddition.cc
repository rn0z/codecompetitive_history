#include <bits/stdc++.h>

using namespace std;

unordered_map<char , array<string, 7>> ascii {
    {'0', { "xxxxx",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "x...x",
            "xxxxx"}},
    {'1', { "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"}},
    {'2', { "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "x....",
            "x....",
            "xxxxx"}},
    {'3', { "xxxxx",
            "....x",
            "....x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"}},
    {'4', { "x...x",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "....x"}},
    {'5', { "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"}},
    {'6', { "xxxxx",
            "x....",
            "x....",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"}},
    {'7', { "xxxxx",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x",
            "....x"}},
    {'8', { "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "x...x",
            "x...x",
            "xxxxx"}},
    {'9', { "xxxxx",
            "x...x",
            "x...x",
            "xxxxx",
            "....x",
            "....x",
            "xxxxx"}},
};

char ntoch(vector<string> c) {
    for (auto const& ch:ascii) {
        bool is_match = true;
        for (unsigned int k = 0; k < c.size(); ++k) {
            if (c[k] != ch.second[k])
                is_match = false;
        }
        if (is_match) return ch.first;
    }
}

void chton(int n) {
    string str = to_string(n);
    for (int q = 0; q < 7; q++) {
        for (int k = 0; k < str.size(); ++k) {
            auto numb = ascii[str[k]];
            cout << numb[q];
            if (k < str.size() - 1) cout << '.';
        }
        cout << endl;
    }
}

int main() {
    vector<string> payload{};
    string line{};
    while (getline(cin, line))
        payload.push_back(line);

    vector<vector<string>> a{}, b{};
    bool rest{}, next_sign;
    for (unsigned int k = 0; k < payload[0].size(); k += 6) {
        vector<string> lines{};
        for (int i = 0; i < 7; ++i) {
            string line = payload[i].substr(k, 5);
            if (line == ".....")  {
                rest = true;
                next_sign = true;
                break;
            }
            next_sign = false;
            lines.push_back(line);
        }
        if (!next_sign)
            if (!rest) a.push_back(lines);
            else b.push_back(lines);
    }

    string a_numb{}, b_numb{};
    for (auto const& numb:a) a_numb += ntoch(numb);
    for (auto const& numb:b) b_numb += ntoch(numb);
    chton(stoi(a_numb) + stoi(b_numb));

    return 0;
}
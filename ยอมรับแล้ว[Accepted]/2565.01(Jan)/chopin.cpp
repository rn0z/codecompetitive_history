#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> alt_key = {
    {"A#", "Bb"},
    {"C#", "Db"},
    {"D#", "Eb"},
    {"F#", "Gb"},
    {"G#", "Ab"},
    {"Bb", "A#"},
    {"Db", "C#"},
    {"Eb", "D#"},
    {"Gb", "F#"},
    {"Ab", "G#"},
};

int main() {
    string key, tone;
    int tc = {};
    while (cin >> key >> tone) {
        ++tc;
        string rs = alt_key[key];

        cout << "Case " << tc << ": ";
        if (!rs.empty()) {
            cout << rs << ' ' << tone << endl;
        } else {
            cout << "UNIQUE" << endl;
        }
    }

    return 0;
}
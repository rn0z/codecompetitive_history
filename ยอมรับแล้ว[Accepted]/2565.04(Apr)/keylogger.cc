#include <bits/stdc++.h>

using namespace std;

unordered_map<string, char> lower {
    {"clank", 'a'},
    {"bong", 'b'},
    {"click", 'c'},
    {"tap", 'd'},
    {"poing", 'e'},
    {"clonk", 'f'},
    {"clack", 'g'},
    {"ping", 'h'},
    {"tip", 'i'},
    {"cloing", 'j'},
    {"tic", 'k'},
    {"cling", 'l'},
    {"bing", 'm'},
    {"pong", 'n'},
    {"clang", 'o'},
    {"pang", 'p'},
    {"clong", 'q'},
    {"tac", 'r'},
    {"boing", 's'},
    {"boink", 't'},
    {"cloink", 'u'},
    {"rattle", 'v'},
    {"clock", 'w'},
    {"toc", 'x'},
    {"clink", 'y'},
    {"tuc", 'z'}
};

unordered_map<string, char> upper {
    {"clank", 'A'},
    {"bong", 'B'},
    {"click", 'C'},
    {"tap", 'D'},
    {"poing", 'E'},
    {"clonk", 'F'},
    {"clack", 'G'},
    {"ping", 'H'},
    {"tip", 'I'},
    {"cloing", 'J'},
    {"tic", 'K'},
    {"cling", 'L'},
    {"bing", 'M'},
    {"pong", 'N'},
    {"clang", 'O'},
    {"pang", 'P'},
    {"clong", 'Q'},
    {"tac", 'R'},
    {"boing", 'S'},
    {"boink", 'T'},
    {"cloink", 'U'},
    {"rattle", 'V'},
    {"clock", 'W'},
    {"toc", 'X'},
    {"clink", 'Y'},
    {"tuc", 'Z'}
};

int main() {
    int n; cin >> n;
    string rs{};
    bool shift{}, caps{};
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        if (s == "bump") {
            caps = !caps;
        } else if (s == "dink") {
            shift = true;
        } else if (s == "thumb") {
            shift = false;
        } else if (s == "whack") {
            rs += ' ';
        } else if (s == "pop") {
            if (rs.size() > 0)
                rs.pop_back();
        } else if ((caps && shift) || (!caps && !shift)) {
            rs += lower[s];
        } else if (!caps && shift) {
            rs += upper[s];
        } else if (caps && !shift) {
            rs += upper[s];
        }
    }

    cout << rs << endl;

    return 0;
}
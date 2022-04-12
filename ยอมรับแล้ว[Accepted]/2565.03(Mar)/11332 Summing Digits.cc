#include <bits/stdc++.h>

using namespace std;

string extrack(string str) {
    int rs{};
    for (char const& ch:str)
        rs += (ch - '0');
    
    return to_string(rs);
}

string f(string str) {
    if (str.length() > 1)
        return f(extrack(str));
    
    return str;
}

void run_case() {
    string str{};
    while (cin >> str && str != "0")
        cout << f(str) << endl;
}

int main() {
    run_case();

    return 0;
}
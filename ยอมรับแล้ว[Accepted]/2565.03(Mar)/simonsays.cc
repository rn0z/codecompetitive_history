#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string str;
    getline(cin, str);
    if (str.length() > 10 && str.substr(0, 10) == "Simon says")
        cout << str.substr(11, str.size()) << endl;
}

int main() {
    int tc; cin >> tc;
    cin.ignore();
    while (tc-- > 0)
        run_case();
    return 0;
}
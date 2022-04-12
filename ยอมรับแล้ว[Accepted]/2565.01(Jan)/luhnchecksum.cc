#include <bits/stdc++.h>
using namespace std;


void run_case() {
    string str; cin >> str;
    int rs{};
    for (int i = str.size() - 2; i >= 0; i -= 2) {
        if ((str[i] - '0') * 2 > 9) {
            string n = to_string((str[i] - '0') * 2);
            str[i] = to_string((n[0] - '0') + (n[1] - '0'))[0];
        } else {
            str[i] = to_string((str[i] - '0')* 2)[0];
        }
    }

    for (auto const& c:str)
        rs += c - '0';

    if (rs % 10 == 0) cout << "PASS";
    else cout << "FAIL";
    cout << endl;
}

int main() {
    int n; cin >> n;
    while (n--) run_case();


    return 0;
}
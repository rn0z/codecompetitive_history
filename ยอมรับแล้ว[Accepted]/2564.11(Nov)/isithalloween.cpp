#include <bits/stdc++.h>
using namespace std;

int main () {
    string m; cin >> m;
    int d; cin >> d;

    if ((!m.compare("OCT") && d == 31) || (!m.compare("DEC") && d == 25)) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

    return 0;
}
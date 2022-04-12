#include <bits/stdc++.h>

using namespace std;

int main() {

    int n{}; cin >> n;
    while (n--) {
        string seq{}; cin >> seq;
        if (!seq.compare("78") || !seq.compare("1") || !seq.compare("4")) {
            cout << "+" << endl;
        }  else if (!seq.substr(seq.length() - 2, 2).compare("35")) {
            cout << "-" << endl;
        } else if (seq[0] == '9' && seq[seq.length() - 1] == '4') {
            cout << "*" << endl;
        } else if (!seq.substr(0, 3).compare("190")){
            cout << '?' << endl;
        }
    }

    return 0;
}
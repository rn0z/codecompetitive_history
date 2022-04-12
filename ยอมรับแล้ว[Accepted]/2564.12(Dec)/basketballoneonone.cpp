#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    std::string str{}; cin >> str;
    int A{}, B{};

    for (std::string::size_type i = 0; i < str.size(); i++) {

        if (str[i] == '1' || str[i] == '2') continue;

        if (str[i] == 'A') {
            if (str[i + 1] == '1') {
                A = A + 1;
            }
            if (str[i + 1] == '2') {
                A = A + 2;
            }
        }
        if (str[i] == 'B') {
            if (str[i + 1] == '1') {
                B = B + 1;
            }
            if (str[i + 1] == '2') {
                B = B + 2;
            }
        }
    }

    if (A > B) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }


    return 0;
}
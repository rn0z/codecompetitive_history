#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int tc{}; cin >> tc;

    while (tc--) {

        string str{};

        cin >> str;
        
        int a{}, b{};


        if (!str.compare("P=NP")) {

            cout << "skipped" << endl;

        } else {

            sscanf(str.c_str(), "%d+%d", &a, &b);

            cout << a + b << endl;

        }

    }


    return 0;
}
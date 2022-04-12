#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int x{}, y{};

    while (cin >> x >> y && (x || y)) {

        if (x == y) cout << "Undecided." << endl;
        else if ((x + y) == 13) cout << "Never speak again." << endl;
        else if (x > y) cout << "To the convention." << endl;
        else cout << "Left beehind." << endl;

    }


    return 0;
}
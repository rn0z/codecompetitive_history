#include <bits/stdc++.h>

int main() {
    using namespace std;
    int g{}, s{}, c{}; cin >> g >> s >> c;
    int buyingp = (g*3) + (s*2) + (c*1);

    if (buyingp >= 8) {
        cout << "Province";
    } else if (buyingp >= 5) {
        cout << "Duchy";
    } else if (buyingp >= 2) {
        cout << "Estate";
    }

    if (buyingp > 1) {
        cout << " or ";
    }
    

    if (buyingp >= 6) {
        cout << "Gold" << endl;
    } else if (buyingp >= 3) {
        cout << " Silver" << endl;
    } else if (buyingp >= 1 || buyingp == 0) {
        cout << "Copper" << endl;
    }



    return 0;
}
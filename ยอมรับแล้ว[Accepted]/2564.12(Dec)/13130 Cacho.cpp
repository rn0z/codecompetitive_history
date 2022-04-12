#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc{}; cin >> tc;
    while (tc--)
    {
        int a1{}, a2{}, a3{}, a4{}, a5{};
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        /*if (a1 == 1 && a2 == 3 && a3 == 4 && a4 ==5 && a5 == 6) {
            cout << "Y";
        } else*/ if (a1 == (a2 - 1) && a1 == (a3 - 2) && a1 == (a4 - 3) && a1 == (a5 - 4)) {
            cout << "Y";
        } else {
            cout << "N";
        }
        cout << '\n';
    }
    


    return 0;
}
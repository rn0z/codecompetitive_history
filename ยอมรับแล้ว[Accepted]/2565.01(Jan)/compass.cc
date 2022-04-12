#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2; cin >> n1 >> n2;
    int rs{};
    if (n1 > n2) {
        int c_clw = (n1 - n2);
        int clw = ((360 - n1) + n2);
        if (c_clw == clw && clw == 180) rs = 180;
        else if (clw < c_clw) rs = clw;
        else rs = c_clw * -1;
    } else if (n1 < n2) {
        int c_clw = (360 - n2) + n1;
        int clw = n2 - n1;
        if (c_clw == clw && clw == 180) rs = 180;
        else if (clw < c_clw) rs = clw;
        else rs = c_clw*-1;
    } else rs = 0;

    cout << rs << endl;

    return 0;
}
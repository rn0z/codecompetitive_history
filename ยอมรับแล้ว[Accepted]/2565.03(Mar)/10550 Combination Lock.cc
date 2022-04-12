#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int init, st, nd, rd;

    while (cin >> init >> st >> nd >> rd && (init || st || nd || rd)) {
        int rs = 360*3;
        rs += ((init - st + 40) % 40) * 9;
        rs += ((nd - st + 40) % 40) * 9;
        rs += ((nd - rd + 40) % 40) * 9;

        cout << rs << endl;
    }

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, h; cin >> a >> b >> h;
    int n{}, rs{};
    bool is_reached{};
    do {
        n += a;
        ++rs;
        if (n >= h) is_reached = true;
        n -= b;
    } while (n < h && !is_reached);
    cout << rs << endl;

    return 0;
}
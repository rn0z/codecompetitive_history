#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc{};
    while (cin >> tc && tc != 0) {
        int n{},m{}; cin >> n >> m;
        
        while (tc--) {
            int x, y; cin >> x >> y;
            if (x == n || m == y) {
                cout << "divisa";
            } else if (x > n && y > m) {
                cout << "NE";
            } else if (x < n && y > m) {
                cout << "NO";
            } else if (x < n && y < m) {
                cout << "SO";
            } else if (x > n && y < m) {
                cout << "SE";
            }
            cout << endl;
        }
    }


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int tc;
    cin >> tc;
    while (tc--) {
        string code; cin >> code;
        int n = sqrt(code.size());
        string arr[n]{};
        for (string::size_type i = 0; i < n; i++) {
            arr[i] = code.substr(i*n, n);
        }
        
        for (int k = n - 1; k >= 0; k--) {
            for (int i = 0; i < n; i++) {
                cout << arr[i][k];
            }
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        string message{}; cin >> message;
        int L = message.size();
        int n = ceil(sqrt(L));
        int M = pow(n, 2);
        message.append(string(M - L, '*'));
        string mss[n]{};
        for (int i = 0; i < n; i += 1) {
            if (i * n <= L) {
                string subMss = message.substr(i*(n), n);
                mss[i] = subMss;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int k = n-1; k >= 0; k--) {
                if (mss[k][i] != '*') cout << mss[k][i];
            }
        }
        cout << endl;
    }

    return 0;
}
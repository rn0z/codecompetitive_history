#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc; cin >> tc;
    int count = 1;
    while (tc--) {
        int n{}, k{}, p{}; cin >> n >> k >> p;
        string caseCount = "Case " + to_string(count) + ": ";
        cout << caseCount;
        (k + p) % n == 0? cout << n << '\n':cout<< (k+p)%n << '\n';
        count++;
    }
    
    
    return 0;
}

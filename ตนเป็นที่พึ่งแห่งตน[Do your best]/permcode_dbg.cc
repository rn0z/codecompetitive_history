#include <bits/stdc++.h>

using namespace std;

int main() {
    int x{};
    while (cin >> x && x) {
        string s, p, m; cin >> s >> p >> m;

        int n = m.size();
        int d = (int)(pow(n, 1.5) + x) % n;

        string c(n, '_');

        for (int i = 0; i < n; i++) {
            if (i == d) {
                c[i] = s[p.find(m[i])];
            } else if (n == (i+1)) {
                int m_inp = p.find(m[i]);
                int m_ins = s.find(m[0]);
                c[i] = s[m_inp ^ m_ins];
            } else {
                int m_inp = p.find(m[i]);
                int m_ins = s.find(m[i+1]);
                c[i] = s[m_inp ^ m_ins];
            }
        }
        cout << c << endl;
    }
}
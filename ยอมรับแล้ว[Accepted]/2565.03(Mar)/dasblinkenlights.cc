#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char** argv) {
    int p, q, s; cin >> p >> q >> s;
    bool blinkp[s]{};
    bool blinkq[s]{};
    
    bool same{};
    int i;

    for (i = p - 1; i < s; i += p)
            blinkp[i] = true;

    for (i = q - 1; i < s; i += q)
        blinkq[i] = true;

    for (i = 0; i < s; ++i)
        if (blinkp[i] && blinkp[i] == blinkq[i])
            same = true;

    if (same) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
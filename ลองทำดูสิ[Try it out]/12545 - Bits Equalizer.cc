#include <bits/stdc++.h>

using namespace std;

int test_case = 1;

void run_case() {

    string S, T; cin >> S >> T;

    int Sones{}, Szeros{}, quest{};
    int Tones{}, Tzeros{};
    int moves{};

    for (int i = 0; i < T.size(); ++i) {
        if (S[i] == '0')
            Sones++;
        if (S[i] == '1')
            Szeros++;
        if (S[i] == '?')
            quest++;

        if (T[i] == '0')
            Tzeros++;
        if (T[i] == '1')
            Tones++;
    }

    if (Sones > Tones && Tzeros > Szeros)
        cout << -1 << endl;

    cout << "Case " << test_case++ << ": " << moves << endl;

}

int main() {

    int tc; cin >> tc;

    while (tc-- > 0)
        run_case();


    return 0;
}
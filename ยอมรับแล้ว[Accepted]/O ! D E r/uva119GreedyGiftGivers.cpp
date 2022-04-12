#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int getIdx(string* arr, int n, string e) {
    for (int k = 0; k < n; k++)
        if (!arr[k].compare(e))
            return k;
    return 0;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        string N[10] = {""};
        for (int i = 0; i < n; i++) cin >> N[i];
        int moneies[10] = {0};

        int idx = 0;
        for (int i = 0; i < n; i++) {
            string e; cin >> e;

            int k = getIdx(N, n, e);
            cin >> moneies[k];
            int g; cin >> g;
            int gv = g>0?(int)moneies[k]/g:0;
            moneies[k] -= (g > 0)? ((int)moneies[k] / g) * g : 0;

            while (g--) {
                string rec; cin >> rec;
                int i = getIdx(N, n, rec);
                moneies[i] += gv;
            }
        }

        for (int i = 0; i < n; i++)
            cout << N[i] << " " << moneies[i] << endl;
    }

    return 0;
}
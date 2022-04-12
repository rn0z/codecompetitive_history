#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    int i = 1;
    cin.ignore();
    while (tc--) {
        int a, b;
        string in;
        getline(cin, in);
        stringstream ssin(in);
        int next = 1;
        float rs = 0;
        while (ssin.good()) {
            string str{};
            ssin >> str;
            float val = atof(str.c_str());
            if (val) {
                if (next == 1) {
                    rs += val * .5;
                } else {
                    rs += val * .05;
                }
                ++next;
            }
        }
            cout << "Case " << i << ": " << rs << endl;
            ++i;
    }
    return 0;
}
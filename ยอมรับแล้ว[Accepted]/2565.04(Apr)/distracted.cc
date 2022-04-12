#include <bits/stdc++.h>

using namespace std;

map<string, char> p{};
vector<pair<string, string>> look{};

int main() {
    int N, L; cin >> N >> L;

    for (;N > 0; --N) {
        string name;
        char status;
        cin >> name >> status;
        p[name] = status;
    }

    if (L == 0) cout << '0' << endl;
    else {
        string n, n2, oper;
        bool mlooku{};
        bool undetermined{};
        for (int t = 0; t < L && cin >> n >> oper >> n2; ++t)
            if (oper == "->")
                if (p[n] == 'm' && p[n2] == 'u') {
                    mlooku = true;
                    break;
                }
                else if (p[n] == 'm' && p[n2] == '?')
                    undetermined = true;
                else if (p[n] == '?' && p[n2] == '?')
                    undetermined = true;
                else if (p[n] == '?' && p[n2] == 'u')
                    undetermined = true;

        if (mlooku)
            cout << '1' << endl;
        else if (undetermined)
            cout << '?' << endl;
        else
            cout << '0' << endl;
    }

    return 0;
}
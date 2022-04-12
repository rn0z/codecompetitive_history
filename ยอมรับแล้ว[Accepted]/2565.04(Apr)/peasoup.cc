#include <bits/stdc++.h>

using namespace std;


void run_case() {

    int n; cin >> n;

    bool eaten{};
    for (int i = 0; i < n; ++i) {

        int items; cin >> items;

        cin.ignore();

        bool soup{}, pan{};

        string peesoup = "pea soup", pancake = "pancakes";

        string restur;
        getline(cin, restur);
        // cin.ignore();

        for (int k{}; k < items; ++k) {
            string name; getline(cin, name);
            if (name == peesoup)
                soup = true;
            if (name == pancake)
                pan = true;
        }

        if (soup && pan && !eaten) {
            cout << restur << endl;
            eaten = true;
        }
    }
    if (!eaten) cout << "Anywhere is fine I guess" << endl;
}

int main() {
    run_case();

    return 0;
}
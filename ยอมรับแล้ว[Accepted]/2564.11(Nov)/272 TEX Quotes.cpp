#include <bits/stdc++.h>
using namespace std;

int main() {
    bool isOpenQuoth{};
        string str{};
        while (getline(cin, str)) {
            string rs{};
        for (auto const& e : str) {
            if (e == '"') {
                if (isOpenQuoth) {
                    rs += "''";
                    isOpenQuoth = !isOpenQuoth;
                } else {
                    rs += "``";
                    isOpenQuoth = !isOpenQuoth;
                }
            } else {
                rs += e;
            }
        }
        cout << rs << endl;
        
        if (feof(stdin)) {
            break;
        }
    }
}
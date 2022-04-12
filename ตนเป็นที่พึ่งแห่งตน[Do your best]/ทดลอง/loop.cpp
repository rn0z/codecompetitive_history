#include <bits/stdc++.h>
using namespace std;

int main() {

    while (1) {
        string str{};
        getline(cin, str);

        for_each(str.begin(), str.end(), [](const char& element) {
            cout << element << endl;
        });

        for (string::iterator it = str.begin(); it != str.end(); ++it) {
            cout << *it << endl;
        }

        for (auto const& e : str) {
            cout << e << endl;
        }
        
        if (feof(stdin)) {
            break;
        }
    }
}
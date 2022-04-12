#include <bits/stdc++.h>

using namespace std;

int main() {
 int n; cin >> n;
    cin.ignore();

    while (n-- > 0) {
        bool pangram = true;
        bool alpha[26]{};
        string phrase;
        getline(cin, phrase);
        for (int i = 0; i < phrase.length(); ++i)
            if (isalpha(phrase[i]))
                alpha[tolower(phrase[i]) - 'a'] = true;
        
        for (int i = 0; i < 26; ++i)
            if (!alpha[i]) pangram = false;

        if (pangram) cout << "pangram";
        else {
            cout << "missing ";
            for (int i = 0; i < 26; ++i)
                if (!alpha[i]) cout << (char)('a' + i);
        }
        cout << endl;

    }
    return 0;
}
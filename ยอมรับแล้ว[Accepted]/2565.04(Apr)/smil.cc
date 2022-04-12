#include <bits/stdc++.h>

using namespace std; 

int main() {
    string n; cin >> n;
    n.push_back(' ');
    n.push_back(' ');
    n.push_back(' ');
    for (unsigned int i = 0; i < n.size(); ++i)
        if ((n[i] == ':' && n[i + 1] == ')') || (n[i] == ';' && n[i + 1] == ')'))
            cout << i << endl;
        else if (n[i] == ':' && n[i + 1] == '-' && n[i + 2] == ')')
            cout << i << endl;
        else if (n[i] == ';' && n[i + 1] == '-' && n[i + 2] == ')')
            cout << i << endl;

    return 0;
}
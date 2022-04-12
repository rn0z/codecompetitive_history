#include <iostream>
#include <map> 

using namespace std;

bool is_mirror(char t) {

    map<char, char> m;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2 = "A   3  HIL JM O   2TUVWXY51SE z  8 ";
    for (int i = 0; i < s1.length(); i++) m[s1[i]] = s2[i];

    if (m[t]) return true;
    else return false;
}

int main() {

    string input;
    while (cin >> input) {
        int len = input.length(), i, k;
        bool flag = true;
        bool mirrored = true;
        for (i = 0, k = len - 1; i < k; i++, k--) {
            if (input[i] != input[k]) {
                flag = false; 
                if (!is_mirror(input[i])) 
                    mirrored = false;
            } else if (!is_mirror(input[i])) { 
                mirrored = false; 
            }
            // if (input[i] != input[k]) flag = false;
            // if (input[k] != is_mirror(input[i])) mirrored = false; 
        }

        cout << input;
        if (flag)
            if (mirrored)
                cout << " -- is a mirrored palindrome." << '\n';
            else
                cout << " -- is a regular palindrome." << '\n';
        else if (mirrored)
           cout << " -- is a mirrored string." << '\n'; 
        else
            cout << " -- is not a palindrome." << '\n';
        cout << '\n';
    }

    return 0;
}

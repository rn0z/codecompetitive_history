#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int score{};
    char key{};
    int tc{}; 

    cin >> tc >> key;
    for (int i = 2; i <= tc; i++){
        char ans{}; cin >> ans;
        if (ans == key) score++;
        key = ans;
    }


    cout << score << '\n';

}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int P, H, O;
    while (scanf("%d %d %d", &P, &H, &O) != EOF) {
        if ((O - P) < H) {
            cout << "Hunters win!" << endl;
        } else {
            cout << "Props win!" << endl;
        }
    }

    return 0;
}
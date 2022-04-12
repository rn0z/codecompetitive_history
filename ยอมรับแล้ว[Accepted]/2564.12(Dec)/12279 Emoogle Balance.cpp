#include <bits/stdc++.h>

using namespace std;

int main() {
    int n{};
    int c = 1;
    while (cin >> n && n != 0) {
        int treated{}, book{};
        for (int i = 0; i < n; i++) {
            int event;
            cin >> event;
            if (event > 0) {
                book++;
            } else {
                treated++;
            }
        }
        printf("Case %d: %d\n", c, book - treated);
        c++;
    }


    return 0;
}
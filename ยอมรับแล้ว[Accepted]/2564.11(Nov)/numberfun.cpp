#include <bits/stdc++.h>

int main() {
    int tc{};
    std::cin >> tc;
    while (tc--) {
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        bool isPossible{};

        using namespace std;

        if ((a + b) == c || (a * b) == c) {
            isPossible = 1;
        }

        if ((a - b) == c || (b - a) == c) {
            isPossible = 1;
        }

        float ab = (float)a / b;
        float ba = (float)b / a;
        float rs = (float)c * 1.0;
        if (ab == rs || ba == rs) {
            isPossible = 1;
        }

        if (isPossible) {
            cout << "Possible";
        } else {
            cout << "Impossible";
        }



        cout << endl;
    }

    return 0;
}
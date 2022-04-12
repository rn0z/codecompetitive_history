#include <iostream>

using namespace std;

int main() {
    int c{};
    int a{}, b{}; cin >> a >> b;
    while (a != b) {
        if (a > b) {
            if ((a & 1) == 0) {
                a /= 2;
                ++c;
            } else {
                ++a;
                ++c;
            }
        } else {
            ++a;
            ++c;
        }
    }

    cout << c << '\n';

    return 0;
}
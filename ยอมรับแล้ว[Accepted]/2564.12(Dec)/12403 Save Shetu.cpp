#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    int total{};
    while (t--) {
        string oper; cin >> oper;
        if (oper[0] == 'd') {
            int donate{}; cin >> donate;
            total += donate;
        } else {
            cout << total << endl;
        }
    }

    return 0;
}
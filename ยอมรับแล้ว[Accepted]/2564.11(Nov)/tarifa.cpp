#include <iostream>
using namespace std;
int main() {
    int X{}, N{}; cin >> X >> N;

    int i = N, ans{};

    while (i--) {
        int p{}; cin >> p;
        ans = ans + (X - p);
    }

    cout << ans + X << '\n';


    return 0;
}
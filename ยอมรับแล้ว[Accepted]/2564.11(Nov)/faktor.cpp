#include "iostream"

int main() {
    using namespace std;
    int cite{}, impact{}; cin >> cite >> impact;
    cout << cite * (impact - 1) + 1 << '\n';

    return 0;
}